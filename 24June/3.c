/*****************************************************************
//write a program to swap the string by using swapping pointer 
//and aslo write a program for swapping the data.
******************************************************************/
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>

/* Method 1: Swaps strings by swapping pointers */
void swap1(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}  
   
int main()
{
  char *str1 = "abc";
  char *str2 = "def";
  swap1(&str1, &str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}

///output///
/******************./a.out
str1 is def, str2 is abc****/



#if 0
/* Method2 :Swaps strings by swapping data*/
void swap2(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}  
   
int main()
{
  char str1[10] = "hello";
  char str2[10] = "world";
  swap2(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}

////output////
/*******************./a.out
str1 is world, str2 is hello****/

*/
#endif
