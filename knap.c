#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a,int b)
{
if (a>b)
{
return a;
}
else
{
return b;
}
}
int maximum(int a,int b)
{
if(a>b)
{
return a;
}
else
{
return b;
}
}
int main()
{
int t;
int n,k;
scanf("%d",&t);
while (t--)
{
scanf("%d%d",&n,&k);
int i,j;
int arr[n];
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int knap[k+1];
knap[0] = 0;
int max = 0;
for (i=1;i<=k;i++)
{
max = knap[i-1];
for( j = 0; j < n;j++)
{
if (arr[j]<=i)
{
max = maximum(max,knap[i-arr[j]] +arr[j]);
}
knap[i] = max;
}
}
printf("%d\n",knap[k]);
}
return 0;
}

