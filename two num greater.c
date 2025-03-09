#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter any two value");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is greater",a);

    }
    else
    {
        printf("%d is greater",b);
    }
    getch();
    return 0;
}
