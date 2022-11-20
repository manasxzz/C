#include <stdio.h>
#include <conio.h>
void main()
{
  int a,b;
  printf("Enter First Number: ");
  scanf("%d",&a);
  printf("\nEnter Second Number: ");
  scanf("%d",&b);
  printf("\nThe sum of the given numbers=%d\nThe difference of the given numbers=%d\nThe product of the given numbers=%d\n%d divided by%d=%d ",a+b,a-b,a*b,a,b,a/b);
  getch();
}
