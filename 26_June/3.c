/*****************************************************************************************
//Write a program as a macro will take two arguments.it should return the position 1 or 0
******************************************************************************************/
#include<stdio.h>
#define min(x,y)  x>y?1:0
int main()
{
	int a,b;
	printf("Enter no 2 min no\n");
	scanf("%d %d",&a,&b);
	printf("position is =%d",min(a,b));
}
/////output/////
/*position is 
./a.out
1

./a.out
Enter no 2 min no
8 7
position is =1



./a.out
Enter no 2 min no
2 2
position is =0

*/
