#include<stdio.h>
#include<conio.h>

void main()
{
    int row,i,j;

    printf("Enter no of row: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {

            printf("* ");
        }
        printf("\n");
    }
}
