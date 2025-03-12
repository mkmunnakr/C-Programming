#include<stdio.h>

void dowork(int a,int b,int *sum,int *prod,float *avg);
int main()
{
    int a,b,sum,prod;
    float avg;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    dowork(a,b,&sum,&prod,&avg);
    printf("sum=%d\n",sum);
    printf("product = %d \n",prod);
    printf("Average = %f\n",avg);
    return 0;
}

void dowork(int a,int b,int *sum,int *prod,float *avg)
{
    *sum = a+b;
    *prod = a * b;
    *avg = (a+b)/2;
}