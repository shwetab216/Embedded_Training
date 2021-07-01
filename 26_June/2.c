/*******************************************************************************
//2. Write a program to Swap the nibble in a byte without using bitwise operator.
*********************************************************************************/ 
#include <stdio.h>
 #include <string.h>

  int main() {
        char byte[10];
        int i = 0, ch;

        
        printf("Enter your byte in binary:");
        fgets(byte, 10, stdin);
        byte[strlen(byte) - 1] = '\0';

        
        if (strlen(byte) != 8) {
                printf("Data length less "
                        "than/greater than 8 bits\n");
                return 0;
        }

        /* swapping nibbles in the byte */
        while(i < 4) {
                ch = byte[i];
                byte[i] = byte[i + 4];
                byte[i + 4] = ch;
                i++;
        }

        /* print the result */
        printf("After swapping the nibbles: %s\n", byte);
        return 0;
  }
////output///
/* ./a.out
Enter your byte in binary:11110000
After swapping the nibbles: 00001111


./a.out
Enter your byte in binary:11001101
After swapping the nibbles: 11011100


*/
