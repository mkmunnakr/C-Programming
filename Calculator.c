#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    printf("Press 1 for Addition\n press 2 for sub \n press 3 for mul \n press 4 for division\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        d=a + b;
        printf("After Addition %d\n",d);
        break ;
        case 2:
        e =a-b;
        printf("After sub %d\n",e);
        break;
        case 3:
        f=a*b;
        printf("After mul %d\n",f);
        break;
        case 4:
        g=a/b;
        printf("After division %d\n",g);
        default :
        printf("Invalid selection");
    }
    
    return 0;
}