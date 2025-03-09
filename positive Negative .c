#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("enter any number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is positive",x);
    }
    else if(x<0)
    {
        printf("%d is Negative",x);
    }
    else
    {
        printf("%d is zero",x);
    }
    getch();
}
