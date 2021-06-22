//3.Left rotate an array upto user's choice 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size, i, j, k, ele, usr_ch;
	
	printf("enter the size for the array:\n");
	scanf("%d", &size);

	printf( "enter choice to rotate the arr elements :\n");
	scanf(" %d", &usr_ch);

	if(!size) {
		printf("invalid size\n");
		return 0;
	}

	int *ptr = (int *) malloc(sizeof(int)*size);
	
	printf("enter array elements\n");

	for( i = 0; i < size; i++){
		scanf(" %d", &ptr[i]);
	}

	for( i = 0 ; i < usr_ch; i++){
		
		ele = ptr[0];

		for(k = 0, j = 0; j < size-1; j++){
			
			ptr[j] = ptr[j+1];	
			
		}
		ptr[size-1] = ele;
	}

	printf("After rotating arr ele\n");

	for( i = 0; i < size; i++){
		printf("%d\n", ptr[i]);
	}

	return 0;
}

/////output////

/*./a.out
enter the size for the array:
4
enter choice to rotate the arr elements :
1
enter array elements
1
2
3
4
After rotating arr ele
2
3
4
1*/

/*./a.out
enter the size for the array:
4
enter choice to rotate the arr elements :
1
enter array elements
1
-1
5
3
After rotating arr ele
-1
5
3
1
*/

