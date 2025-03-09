#include<stdio.h>
int main()
{
    int i,j,k=0;
    printf("enter the value of i");
    scanf("%d",&i);

    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
            printf("%d,%d",j,k);
            k=1;
            break;
        }
    }
        if(k==0)
        {
            printf("%d is a prime number",i);
        }
        else
        {
            printf("%d is not a prime number",i);
        }
}
