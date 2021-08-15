#include <stdio.h>
int main()
{
    // Integer variable
    int N=5;

    // Pointer to an integer
    int *ptr1,*ptr2;

    // Pointer stores the address of N
    ptr1=&N;
    ptr2=&N;
   
   printf("pointer ptr1 before increment");
    printf("%p\n",ptr1);
  
   // Incrementing pointer ptr1;
    ptr1++;

    printf("pointer ptr1 after increment");
    printf("%p\n",ptr1);

    printf("pointer ptr2 before decremenr");
    printf("%p\n",ptr2);

   // Decrementing pointer ptr1;
    ptr2--;
    printf("pointer ptr2 after decremenr");
    printf("%p\n",ptr2);

    return 0;
}