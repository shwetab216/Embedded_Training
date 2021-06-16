//Write a program to print 1 to N
#include<stdio.h>

void Disp_1toN(int n)
{
	if(n == 0)
	return;
	
	Disp_1toN(n-1);

	printf("%d",n);
}

int main()
{
	int no;
		
	printf("Enter the number\n");
	scanf("%d",&no);

	Disp_1toN(no);
}
