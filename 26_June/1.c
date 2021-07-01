/**********************************************************************************************************************
1. Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields)
********************************************************************************************************************/
#include<stdio.h>
union byte_nibbles
  {
  unsigned char b1: 4;
  unsigned char b2: 4;
 
  };

int main()
{
	union byte_nibbles bb;
	bb.b1 = 0x01;
	bb.b2 = 0x02;
	printf("%d %d",bb.b1,bb.b2);
}

////output///
/*./a.out
2 2**/
