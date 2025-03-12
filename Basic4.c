#include<stdio.h>

int main()
{
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("**pptr=%f\n",**pptr);
    return 0;
}