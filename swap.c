#include<stdio.h>

void _swap(int *a , int *b);
int main()
{
    int x,y;
    printf("Enter first num =");
    scanf("%d",&x);
    printf("Enter second num=");
    scanf("%d",&y);
    _swap(&x,&y);
    printf("x=%d & y=%d\n",x,y); 

    return 0;
}

// call by reference
void _swap(int *a , int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}