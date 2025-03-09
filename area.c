#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,i,d,A;
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    s=(a+b+c);
    i=sqrt(s*(s+a)*(s+b)*(s+c));
    d=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    A=i/d;
    printf("%f,%f",s,A);

   return 0;
}
