#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter the value x");

    scanf("%d",&x);

    x=x%10*100+x/10;
    printf("%d",x);
}
