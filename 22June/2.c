//2.Write a C program implementing  mem copy operation with void pointers.
#include<stdio.h>
#include<string.h>

void memcpyfun(void *des,void *src,int n)
{
	char *s = (char*)src; //typecast src and des to (char*)
	char *d = (char*)des;

	for(int i = 0;i < n;i++)
	{
		d[i]  =  s[i];		//copy  data s to d
	}
	
}


int main()
{
	char srcstr[] ="Welcome";
	char des[100];
	memcpyfun(des,srcstr,strlen(srcstr)+1); //usrdefined memcpy function
	printf("String after copied =  %s",des);
}

////output////
/*./a.out
String after copied =  Welcome*/
