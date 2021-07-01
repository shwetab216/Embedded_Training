/*******************************************
//2. Write a program to count set bits.
********************************************/
#include<stdio.h>
int main()
{
	int n,count = 0;
	printf("Enter no:");
	scanf("%d",&n);
	

	while(n != 0)
	{
		if(n&1 == 1)	
		count++;
		n = n>>1;
	}	

	printf("%d",count);
}

///output///
/*./a.out
Enter no:4
1


./a.out
Enter no:6
2


./a.out
Enter no:67
3 */
