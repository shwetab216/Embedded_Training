//Dec to Binary using recursion
#include <stdio.h>

void dec_to_Bin(int num)
{
    if (num == 0)
    {
        return ;
    }

    dec_to_Bin(num / 2);
    printf("%d", num % 2);
}

int main(void)
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);
    
    dec_to_Bin(n);
	return 0;
}


