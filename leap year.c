---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------***************#include<stdio.h>
#include<conio.h>
void main()
{
    int x;


    printf("enter the value of x");
    scanf("%d",&x);

    if(x%400==0)
        {
                printf("leap year");

        }
        else if(x%100==0)
    {
        printf("not leap year");
    }

    else if(x%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");

    }
    getch();
    }
