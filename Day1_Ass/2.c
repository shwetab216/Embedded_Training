//2. A block of code is given to you and comment out all the code.

#include<stdio.h>
int main()
{
#if 0
	int fact = 1,i,n = 5;

	for(i = 1;i<=n;i++)
	{
		fact = fact *i;
	}

	printf("%d",fact);
#endif

} 
