//3.Program to find the sum of digits of a number is reduce to 1 digit

#include<stdio.h>
int main()
{
	int rem,num,sum = 10;

	printf("Enter any number :");
	scanf("%d",&num);
	
	while(sum >= 10)
	{
		sum = 0;
		while(num != 0)
		{
			rem = num % 10;
			sum += rem;
			num /= 10;
		}
		
		
		
		num = sum;
	}

	printf("%d",sum);
		
}
