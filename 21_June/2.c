//2. Write a C Program to find inverse of a matrix.
#include<stdio.h>
#include<math.h>

#define SIZE 20

int main()
{
	float a[SIZE][SIZE], x[SIZE], ratio;
	int i,j,k,n;

	printf("Enter row & cloumn matrix size: ");
	scanf("%d", &n);
				 
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			 printf("a[%d][%d] = ",i,j);
			 scanf("%f", &a[i][j]);
		}
	}
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		 {
			if(i==j)
			{
				a[i][j+n] = 1;
			}
			else
			 {
				a[i][j+n] = 0;
			 }
		}
	}
		

	for(i=0;i<n;i++)
	{
		if(a[i][i] == 0.0)
		 {
			 printf("Mathematical Error!");
				 
		  }
			  for(j=1;j<n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];
					    for(k=1;k<=2*n;k++)
					    {
					     	a[j][k] = a[j][k] - ratio*a[i][k];
					    }
				   }
			  }
		 }
		
		 for(i=0;i<n;i++)
		 {
			  for(j=n+1;j<2*n;j++)
			  {
			   	a[i][j] = a[i][j]/a[i][i];
			  }
		 }

		 /* DisplayInverse Matrix */
		 printf("\nInverse Matrix is:\n");
		 for(i=0;i<n;i++)
		 {
			  for(j=n+1;j<2*n;j++)
			  {
			   	printf("%0.3f\t",a[i][j]);
			  }
			  printf("\n");
		 }
		
		 return(0);
}

///output///

/*./a.out
Enter matrix size: 3
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 45
a[1][1] = 6
a[1][2] = 7
a[2][0] = 8
a[2][1] = 9
a[2][2] = 8

Inverse Matrix is:
0.000	0.000	
-0.036	0.286	
0.016	-0.188	
*/
