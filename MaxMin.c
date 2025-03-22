#include<stdio.h>

int main()
{
    int size,min,max,i,n;
    
    printf("n=");
   scanf("%d",&n);
   int a[n];
   printf("Insert the Element \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
   }

   // int a[]={5,50,55,10,054,155,96,52,55,10,524,103,2,550};
    min =a[0];
    max =a[0];
   
    size=sizeof(a)/sizeof(a[0]) ;
    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Smallest Element = %d\n",min);
    printf("Largest Element = %d\n",max);
    return 0;

}