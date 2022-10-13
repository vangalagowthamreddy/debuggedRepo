#include<stdio.h>
void main()
{  int a[2],b[2],x=0,y=0,i,n=3;
   printf("enter the alice points...\n");
   for(i=0;i<n;i++)
    { 
	scanf("%d",&a[i]);
    }
   printf("enter the bob's points...\n");
   for(i=0;i<n;i++)
    { 
	scanf("%d",&b[i]);
    }
   for(i=0;i<n;i++)
    { if(a[i]>b[i])
	{
	  ++x;
	}
	 else 
	   if(a[i]<b[i])
	     {
 	        ++y;
	     }
		else
		  if(a[i]==b[i])
		    { 
			printf("");
		    }
         }
    printf("%d\t%d",x,y);
}
