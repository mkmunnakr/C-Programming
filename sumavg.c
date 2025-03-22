#include<stdio.h>
int main()
{
    int sum=0,avg,n,i,size;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    printf("Insert the Element \n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
    }
   //int a[]={5,5,6,4,10};
   size=sizeof(a)/sizeof(a[0]) ;
   for(i=0;i<size;i++)
   {
    sum+=a[i];
    avg=sum/n;
   }
   printf("sum = %d\n",sum);
   printf("avg = %d\n",avg);
   return 0;
}