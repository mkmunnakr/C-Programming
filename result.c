#include<stdio.h>
#include<conio.h>
void main()
{
    float p,c,b,m,cs,sum,x;
    printf("enter the value of p ");
    scanf("%f",&p);
    printf("enter the value of c ");
    scanf("%f",&c);
    printf("enter the value of b ");
    scanf("%f",&b);
    printf("enter the value of m ");
    scanf("%f",&m);
    printf("enter the value of cs ");
    scanf("%f",&cs);
    sum=p+c+b+m+cs;
    printf("%f sum ",sum);
    x=(sum/500)*100;
    printf("\n%f total value x ",x);
    if(x>=90&&x<=100)
    {
        printf("Grade A");
    }
    else if(x>=80&&x<90)
    {
        printf("Grade B");
    }
    else if(x>=70&&x<80)
    {
        printf("Grade C");

    }
    else if(x>=60&&x<70)
    {
        printf("Grade D");

    }

    else if(x>=40&&x<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    getch();
}
