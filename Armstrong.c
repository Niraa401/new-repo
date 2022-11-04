#include <stdio.h>
// Find an armstrong number;
int main()
{
  int num, ornum, r, result = 0;
  printf("Enter three digit number : ");  //560
  scanf("%d", &num);

  ornum = num;
  while (ornum != 0)
  {
    r = ornum % 10;
    result += r * r * r;
    ornum /= 10;
  }

  if (result == num)
    printf("%d is an Armstrong number", num);
  else
    printf("%d is not an Armstrong number", num);

  return 0;
}
