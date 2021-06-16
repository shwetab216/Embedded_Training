//2.Execute the line and find the output

#include<stdio.h>
int main()
{
	int a,b,x = 0;
	a = 2,b = 1;
	
	x = (a++ && (!b) && b|| ++a);

	printf("%d",x);   // output is 1
}
