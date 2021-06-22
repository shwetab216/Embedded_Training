//4. Find maximum sum of sub array 
#include <stdio.h>

int max(int a[],int n)
{
  int i,j,k;
  int sum,max = 0;
  for(i=0; i<n; i++)
  {
    for(j=i; j<n; j++)
    {
      sum = 0;
      for(k=i ; k<j; k++)
      {
        sum = sum + a[k];
      }
      if(sum>max)
      max = sum;
    }
   }
   return max;
}

int main()
{
    	int i;
	int a[] = {1,-2,3,-1,2};
 
    	int n = sizeof(a)/sizeof(a[0]);


	for(i = 0; i < n ;i++)
	{
		printf("%d  ", a[i]);
    	} 
    	printf("\n");
 
 	printf("sum is  : %d \n", max(a, n));
        return 0;
}

///output///

/*./a.out
1  -2  3  -1  2  
sum is  : 3*/
