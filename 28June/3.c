/********************************************************************************
//3. Write a program with Macro to find even or odd using bitwise operator.
******************************************************************************/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter no:\n");
	scanf("%d",&n);
	
	if(n&1)
	printf("odd no");
	else
	printf("even no");
}


////output///
/* ./a.out
Enter no:
111
odd no


./a.out
Enter no:
234
even no

./a.out
Enter no:
0
even no
*/
