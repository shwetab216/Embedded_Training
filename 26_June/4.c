/*************************************************************************
4. Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro.
*************************************************************************/
#include <stdio.h>

#define SET_BIT(num,pos) 	(num |= (1<<pos))	//set bit
#define CLEAR_BIT(num,pos) 	(num &= (~(1<<pos)))    //clear bit
#define TOGGLE_BIT(num,pos) 	(num ^= (1<<pos))	//toggle bit
#define GET_BIT(num,bit) 	((n &(1<<bit))>>bit)	//get bit

int main(){

	
	int val;
	int bit;
	printf("Enter no and position..\n");
	scanf("%d %d",&val ,&bit);
	
	//SET bit number 2 to zero 
	SET_BIT(val,bit);
	printf("After setting  bit %d \n", val);
	CLEAR_BIT(val,bit);
	printf("After clearing  bit %d \n", val);
	TOGGLE_BIT(val,bit);
	printf("After togging  bit %d \n", val);
	GIT_BIT(val,bit);
	printf("After getting the bit %d\n",val);
	
	return 0;
}


////output///
/*./a.out
After setting  bit 10 
After clearing  bit 8 
After togging  bit 10 


./a.out
Enter no and position..
5
1
After setting  bit 7 
After clearing  bit 5 
After togging  bit 7 

./a.out
Enter no and position..
64
1
After setting  bit 66 
After clearing  bit 64 
After togging  bit 66 

*/

