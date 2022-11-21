#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    return a/b;
}

void main()
{
    int x,y,choice,i=1;
    while(i<4)
    {
        system("cls");
        printf("**************Calculator*************");
        printf("\n\t\tMENU");
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nENTER CHOICE...");
        scanf("%d",&choice);
        printf("\n\n*********INPUT************\nEnter First Number: ");
        scanf("%d",&x);
        printf("\nEnter Second Number: ");
        scanf("%d",&y);
        
        switch(choice)
        {
            case 1:
            printf("********ADDITION********\n\n%d+%d=%d",x,y,add(x,y));
            getch();
            break;

        }
        i++;
    }
}