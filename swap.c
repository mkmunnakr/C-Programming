#include<stdio.h>
#include<conio.h>
void main()
{
        int a,b,sum;
        printf("Enter any two number: ");
        scanf("%d%d",&a,&b);

        /*
        a=a+b;
        b=a-b;
        a=a-b;
        */
        sum=b;
        b=a;
        a=sum;
        printf("\n %d is a,\n %d is b",a,b);


        getch();


}
