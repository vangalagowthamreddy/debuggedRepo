#include<stdio.h>
void main()
{  long int a[10];
   long int sum=0;
   int n,i;
   printf("enter n value...\n");
   scanf("%d",&n);
   printf("enter the numbers into array...\n");
   for(i=0;i<n;i++)   
    {
	scanf("%ld",&a[i]);
    }
   for(i=0;i<n;i++)
    { 
	sum=sum+a[i];
    }
   printf("%ld",sum);
}