//Write a program to print N to 1
#include<stdio.h>

void Disp_Nto1(int n)
{
	if(n == 0)
	return;
	
	printf("%d",n);
	Disp_Nto1(n-1);
}

int main()
{
	int no;
	
	printf("Enter the number\n");
	scanf("%d",&no);

	Disp_Nto1(no);
}
