#include<stdio.h>
void main()
{
long int n,i,j,min,max;
long int sum=0,a[40];
printf("enter n value\n");
scanf("%ld",&n);
printf("enter the %ld numbers to be add\n",n);
for(i=0;i<n;i++)
{
scanf("%ld",&a[i]);
sum+=a[i];
}
min=a[0];
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
else if(a[i]>max)
max=a[i];
}
printf("minimum value is %ld\n",sum-max);
printf("maxmimu value is %ld\n",sum-min);
}

