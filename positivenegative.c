#include<stdio.h>
//check number is positive negative and zero
int main()
{
    int a;
    printf("Enter the number a :");
    scanf("%d",&a);
    if(a==0)
    {
        printf("Number is Zero");
    }
    else if(a>0)
    {
        printf("Number is Positive");
    }
    else{
        printf("Number is Negative");
    }
    return 0;

}