//Write a C Program to show matrix multiplication on 2-D Array. 

#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;    

	printf("enter the no of rows:");    
	scanf("%d",&r);    
	printf("enter the no of column:");    
	scanf("%d",&c);    
	
	printf("enter the first matrix element:\n");    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			scanf("%d",&a[i][j]);    
		}    
	}    

	printf("enter the second matrix element:\n");    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			scanf("%d",&b[i][j]);    
		}    
	}    
    
	printf("multiply of the matrix:\n");    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			mul[i][j]=0;    
			for(k=0;k<c;k++)    
			{    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}    

	   
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			printf("%d\t",mul[i][j]);    
		}    
		printf("\n");    
	}    
	return 0;  
}  


////output///
/* ./a.out
enter the no of rows:3
enter the no of column:3
enter the first matrix element:
1 1 1
1 1 1
1 1 1
enter the second matrix element:
1 1 1
1 1 1
1 1 1
multiply of the matrix:
3	3	3	
3	3	3	
3	3	3	*/

/* ./a.out
enter the no of rows:2 
enter the no of column:2
enter the first matrix element:
-1 3
1 1
enter the second matrix element:
-2 3 
4 1
multiply of the matrix:
14	0	
2	4	
*/

