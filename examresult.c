#include<stdio.h>
#include<conio.h>
void main()
{
    int p,c,b,m,cs,sum,x;
    pritf("enter the value of p");
    scanf("%d",&p);
    pritf("enter the value of c");
    scanf("%d",&c);
    pritf("enter the value of b");
    scanf("%d",&b);
    pritf("enter the value of m");
    scanf("%d",&m);
    pritf("enter the value of cs");
    scanf("%d",&cs);
    sum=p+c+b+m+cs;
    printf("%d",sum);
    x=5/sum*100;
    printf("value of x");
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
