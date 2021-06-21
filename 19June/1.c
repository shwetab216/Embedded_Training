//1.Write a simple c program to demonstrate inline function advantage over the macro

#include<stdio.h>

/*Using Macro */
#define square(x) x*x

int main()
{
	int num,res;
	printf("Enter no:\n");
	scanf("%d",&num);
	res = square(num + 3);
	printf("Square of %d is = %d",num,res);
	
}


/////output////

/*Output is /19June$ ./a.out
Enter no:
5
Square of 5 is = 23*/



#if 0
/*Using inline function*/
int main()
{
	int num,res;

	printf("Enter no:\n");
	scanf("%d",&num);
	res = sqr(num+3);
	printf("Square of %d is = %d ",num,res);
	return 0;
}
inline int sqr(int x)
{
	return x * x;
}


////output////

/*output is /19June$ ./a.out
Enter no:
5
Square of 5 is = 64*/
#endif
