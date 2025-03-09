#include<stdio.h>
#include<conio.h>
 void main()
 {
    char alp;
    printf("enter any char value: ");
    scanf("%c",&alp);
    //if((alp>= 97&& alp<=122) || (alp>=65 && alp<=90))
    if((alp>= 'a'&& alp<='<=z') || (alp>='A' && alp<='Z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("not alphabet");
    }
    getch();
 }
