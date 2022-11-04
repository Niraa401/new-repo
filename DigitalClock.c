#include <stdio.h>
#include <windows.h>

int main() {
    int hour, min, sec;
    int day = 1000;
    printf("Set Time : ");
    scanf("%d %d %d", &hour, &min, &sec);
    if(hour > 12 || min > 60 || sec > 60) {
        printf("ERROR.....!!!!!");
        exit(0);
    }
        while(1) {
            sec++;
            if(sec > 59) {
                min++;
                sec = 0;
            } if(min > 59) {
                hour++;
                min = 0;
            } if (hour > 12) {
                hour = 1;
            }
            day++;
            printf("Clock : ");
            printf("%02d : %02d : %02d", hour, min, sec);  // This write our time in format 00:00:00
            Sleep(day); // this shows Sleep slows down the while loop and make it more like a real clock
            system("cls"); // This clear the Screen
        }
}
