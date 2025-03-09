#include<stdio.h>
#include<conio.h>
void main()
{
    int num=1,p=1;

    while(num<=5)
    {
        printf("\nnum:%d, p:%d ",num,p);
        p=p*num;
        num++;
    }

            printf("product is %d",p);
            getch();
}
