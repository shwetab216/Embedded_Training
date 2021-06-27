/*********************************************************************************
//Implementation of c program for string lenght,stringcopy and string comparision. 
//without using inbuilt function
*********************************************************************************/

#include<stdio.h>


/**********************************************
//strlen program without using inbuilt function
***********************************************/
int len_of_str(const char *s)
{
	int cnt = 0;

	while(*s != '\0')
	{
		cnt++;
		s++;
	}
	return cnt;
}

int main()
{
	int len;
	char buff[100] = " This is string";
	len = len_of_str(buff);
	printf("strlenth is = %d",len);
}
////output////
/*./a.out
strlenth is = 15*/



/***********************************************
//strcopy program without using inbuilt function 
************************************************/
#if 0
void copy_str(char *trgt,char *src)
{
	while(*src)
	{
		*trgt = *src;
		src++;
		trgt++;
	}
	
	*trgt = '\0';
	
}

int main()
{
	char s[100] = "This is  a string";
	char d[100] ;

	copy_str(d,s);
	printf("%s",d);

	
}
///output///////
/*./a.out
This is  a string */

#endif




#if 0
/**************************************************
//strcompare program without using inbuilt function
***************************************************/
int strcompare(const char *s1, const char *s2)
{
	int flag = 0;
	
	while(*s1!= '\0' && *s2!= '\0')
	{
		if(*s1 != *s2)
		{
			flag =1;
		}

		s1++;
		s2++;
	}

	if(flag == 0)
	return 0;
	else
	return 1;
}

int main()
{
	char str1[100] = "HEllo";
	char str2[100] = "HEllo";

	int cmp = strcompare(str1,str2);
	
	if(cmp == 0)
	printf("Str are equal...");
	else
	printf("str are not equal...");

	return 0;
}

////output///
/* ./a.out
Str are equal...*/

#endif

