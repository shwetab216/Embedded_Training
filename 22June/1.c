//1.Execute the C program and note down the outputs!

#include<stdio.h>
int main()
{
	int arr[3][4] ={{10,11,12,13},
			{20,21,22,23},
			{30,31,32,33}
			};


	int i,j;
	for(i =0;i<3;i++)
	{
		printf("Address of %dth array = %u %u\n",i,arr[i],*(arr+i));
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
			printf("%d",*(*(arr+i)+j));
		}
		printf("\n");
	}
}
///output///
/*
./a.out
Address of 0th array = 3484710992 3484710992
10 1011 1112 1213 13
Address of 1th array = 3484711008 3484711008
20 2021 2122 2223 23
Address of 2th array = 3484711024 3484711024
30 3031 3132 3233 33
*/

