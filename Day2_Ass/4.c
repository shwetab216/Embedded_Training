//4.Execute the code and give output

#include<stdio.h>
int main()
{
	int x = 10,y = 3;
	{
		int x =100,z=10;
		printf("%d %d",x,z);
	}
	
	printf("%d %d",x,z); // z is undeclared error
	
}

//output : It will gives error z is undeclared
