#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter any character");
    scanf("%c",ch);

    if((ch=="a" || ch=="e" || ch=="i" || ch=="0"||ch=="u" || ch=="A"||ch=="E"||ch=="I"||ch=="O"||ch=="U"))
   {
          printf("%c is VOWEL",ch);
   }
    else
    {
        printf("%c is CONSTANT",ch);
    }
    getch();
}
