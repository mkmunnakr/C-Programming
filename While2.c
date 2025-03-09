#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0;
    printf("enter integer value");
    while(1)
    {
        printf("\nenter an input: ");
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }

        if(num>0)
        {
            sum+=num;
        }
    }

    printf("Sum is %d",sum);
}
