#include <stdio.h>
 
int main()
{
  int n, a[1000],a_i,j,k,t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (a_i = 0;a_i< n;a_i++) {
    scanf("%d", &a[a_i]);
  }
 
  for (a_i= 1 ;a_i<= n - 1; a_i++) {
    j =a_i;
 
    while(a[j] < a[j-1]) {
      t          = a[j];
      a[j]= a[j-1];
      a[j-1] = t;
 
      j--;
      for(k=0;k<n;k++){
      printf("%d",a[k]);
    }
    printf("\n");
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (a_i = 0;a_i<= n - 1;a_i++) {
    printf("%d\t", a[a_i]);
  }
 
  return 0;
}


output:
klu@klu:~/Desktop$ ./a.out
Enter number of elements
6
Enter 6 integers
1 4 3 5 6 2
134562
134526
134256
132456
123456
Sorted list in ascending order:
1	2	3	4	5	6
