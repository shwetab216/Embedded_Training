/**************************************************
//1.Simulate the interrupt with the function pointer
***************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct
{
	char intr_name[10];
	int (*isr)();
}isr_t;

int keyboard_intrpt()
{
	printf("Keyboard Interupt .....\n");
}

int mouse_intrpt()
{
	printf("Mouse Interupt....\n");
}

int rtc_intrpt()
{
	printf("RTC Interupt....\n");
}

int i2c_intrpt()
{
	printf("I2c intrpt...\n");
}
int spi_intrpt()
{
	printf("SPI Interupt....\n");
}

isr_t ivt[] = 
{
	{"isr0",keyboard_intrpt},
	{"isr1",mouse_intrpt},
	{"isr2",rtc_intrpt},
	{"isr3",i2c_intrpt},
	{"isr4",spi_intrpt},

};


int main()
{
	while(1)
	{
		(ivt[rand()%5].isr)();
		sleep(1);
	}
}


/////output/////
/****./a.out
I2c intrpt...
Mouse Interupt....
RTC Interupt....
Keyboard Interupt .....
I2c intrpt...
Keyboard Interupt .....
Mouse Interupt....
RTC Interupt....
SPI Interupt....
Mouse Interupt...**/
