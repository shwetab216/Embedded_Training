//2.check if array is sorted in ascending order or not?

#include <stdio.h>
#define MAX 5

/* function definition to check array sorted or not*/
int check_sort_array(int arr[],int n)
{
  if(n == 0)
  {
       return 1;
  }
  else
  {
     if(arr[n] > arr[n-1])
     {
       return check_sort_array(arr,n-1);
     }
     else
     {
       return 0;
     }
 
  }
}
int main()
{
   int n,arr[MAX],i;
   printf("\nEnter no of elements: ");
   scanf("%d",&n);

   
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   if(check_sort_array(arr,n-1))
   {
       printf("\nArray is sorted");
   }
   else
   {
        printf("\nArray is not sorted");
   }
   return 0;
}


////output////
/* ./a.out

Enter no of elements: 5
1
2
3
4
5

Array is sorted*/

/*./a.out

Enter no of elements: 5
-1
-2
4   
1
7

Array is not sorted*/


