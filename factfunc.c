// to find the factorial using function
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("The factorial of the given Number:%d", factorial(n));
}