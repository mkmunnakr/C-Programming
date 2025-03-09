#include<stdio.h>
#include<conio.h>
void main()
{
    int num,mul=1;
    printf("enter integer value: ");
    while(1)
    {
        printf("\nenter the input: ");
        scanf("%d",&num);

        if(num<=5&&num>0)
        {
            mul=mul*num;
            printf("mul is %d",num);
            }
            else
            {
                break;
            }
}}

