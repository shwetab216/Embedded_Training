//2. What is perror? how it is working? explore few examples.
/*
-> perror - print a system error message
-> The  perror() function  produces  a  message  on  standard error describing the last error encountered during a call to a system or
   library function.
-> void perror(const char *s)
-> #include <errno.h> - This is standard error header file
-> First (if s is not NULL and *s is not a null byte ('\0')), the argument string s is printed, followed by a colon and a blank.   Then
   an error message corresponding to the current value of errno and a new-line.
*/


/**************perror example c program************************/

#include <stdio.h>

int main () {
   FILE *fp;

   /* rename  file */
   rename("file.txt", "newfile.txt");

   fp = fopen("file.txt", "r");
   if( fp == NULL ) {
      perror("Error found: ");
      return(-1);
   }

   fclose(fp);
      
   return(0);
}

////output////
/*
./a.out
Error found: : No such file or directory*/






