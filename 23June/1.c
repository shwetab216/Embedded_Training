//1.What is perror? how it is working? explore few examples.
#include <stdlib.h>

/***********************************valgrind ex1*************************************************/

int main()
{
    char *x = malloc(100); /* or, in C++, "char *x = new char[100] */
    return 0;
}


///output///

/*
valgrind ./val
==30035== Memcheck, a memory error detector
==30035== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30035== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30035== Command: ./val
==30035== 
==30035== Invalid write of size 4
==30035==    at 0x400544: f (in /home/shweta/Desktop/Linux_class_ass/GIT_repo/Embedded_Training/23June/val)
==30035==    by 0x400555: main (in /home/shweta/Desktop/Linux_class_ass/GIT_repo/Embedded_Training/23June/val)
==30035==  Address 0x5204068 is 0 bytes after a block of size 40 alloc'd
==30035==    at 0x4C2DB8F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==30035==    by 0x400537: f (in /home/shweta/Desktop/Linux_class_ass/GIT_repo/Embedded_Training/23June/val)
==30035==    by 0x400555: main (in /home/shweta/Desktop/Linux_class_ass/GIT_repo/Embedded_Training/23June/val)
==30035== 
==30035== 
==30035== HEAP SUMMARY:
==30035==     in use at exit: 40 bytes in 1 blocks
==30035==   total heap usage: 1 allocs, 0 frees, 40 bytes allocated
==30035== 
==30035== LEAK SUMMARY:
==30035==    definitely lost: 40 bytes in 1 blocks
==30035==    indirectly lost: 0 bytes in 0 blocks
==30035==      possibly lost: 0 bytes in 0 blocks
==30035==    still reachable: 0 bytes in 0 blocks
==30035==         suppressed: 0 bytes in 0 blocks
==30035== Rerun with --leak-check=full to see details of leaked memory
==30035== 
==30035== For counts of detected and suppressed errors, rerun with: -v
==30035== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
*/




/************************************valgrind ex2***************************************************/
#if 0
int main()
{
	char *ptr = "hello";
	ptr[0] = 't';
	return 0;
}


////output////

 valgrind ./a.out
==30572== Memcheck, a memory error detector
==30572== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30572== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30572== Command: ./a.out
==30572== 
==30572== 
==30572== Process terminating with default action of signal 11 (SIGSEGV)
==30572==  Bad permissions for mapped region at address 0x400574
==30572==    at 0x4004E6: main (in /home/shweta/Desktop/Linux_class_ass/GIT_repo/Embedded_Training/23June/a.out)
==30572== 
==30572== HEAP SUMMARY:
==30572==     in use at exit: 0 bytes in 0 blocks
==30572==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==30572== 
==30572== All heap blocks were freed -- no leaks are possible
==30572== 
==30572== For counts of detected and suppressed errors, rerun with: -v
==30572== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
Segmentation fault (core dumped)

#endif

