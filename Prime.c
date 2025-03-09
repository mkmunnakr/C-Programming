#include<stdio.h>
void main()
{
    int a,b,d=0;

    printf("Enter a number greater than 2: ");
    scanf("%d",&a);

    for(b=2;b<a/2;b++)
    {
        printf("\nb is %d and d is %d ",b,d);
        if(a%b==0)
        {
            d=1;
            break;
        }

    }

    printf("\nd is %d ",d);

    if(d==0)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
}
