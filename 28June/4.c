/**************************************************************
//4. Write a program to find the given number is 2 power or not.
***************************************************************/
#include<stdio.h>

int powof2(int n)
{
	while(n!=1)
	{
		if((n%2) != 0)
		return 0;
		n = n/2;
	}
}
int main(void)
{
	int no;
	printf("Enter number:\n");
	scanf("%d",&no);

	if(powof2(no))
	printf("No is power of 2");
	else
	printf("No is  not power of 2");
}


///output////
/**./a.out
Enter number:
8
No is power of 2



./a.out
Enter number:
7
No is  not power of 2
*/

