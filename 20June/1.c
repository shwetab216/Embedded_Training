//1. Find the second largest number in the array

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 100
int main()
{
	int a[MAX], n,i,max,second_max;
	printf("Enter size of array:");
	scanf("%d",&n);

	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max= a[0];
	second_max= a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			second_max=max;
			max=a[i];
		}
		else if(a[i] > second_max && a[i]!=max)
		{
			second_max=a[i];
		}
	}

	printf("%d",second_max);
	return 0;	
}


////Output////

/*./a.out
Enter size of array:5
1
2
7
3
6
6*/

/*./a.out
Enter size of array:5
-1
5
2
0
4
4*/


