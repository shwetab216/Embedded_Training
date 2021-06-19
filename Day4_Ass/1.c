//1i.How to print the current time, seconds, milliseconds, nanoseconds in linux ?
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>


int main()
{
	struct timeval tv;
	
	gettimeofday(&tv,NULL);
 	printf ( "second:% ld \n", tv.tv_sec); // seconds
 	printf ( "millisecond:% ld \n", tv.tv_sec * 1000 + tv.tv_usec / 1000); // ms
 	printf ( "microsecond:% ld \n", tv.tv_sec * 1000000 + tv.tv_usec); // sec
	printf("nanoseconds %ld",tv.tv_sec *1000000000);//nanoseconds
}
