#include<stdio.h>
#include<conio.h>
void main()
{
    int bs,hra,da,gs;
    printf("Basic Salary ");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=bs*0.20;
        da=bs*0.8;
    }
    else if(bs<=20000)
    {
        hra=bs*0.25;
        da=bs*0.9;
    }
    else if(bs>20000)
    {
        hra=bs*0.3;
        da=bs*0.95;
    }
    gs=bs+hra+da;
    printf("%d is gross Salary",gs);
    getch();
}
