#include <stdio.h>
int main()
{
  int number = 50;
  int *p;
  p = &number;
       printf("Address of p variable is %u \n",p);
  p = p - 3;
printf("After subtracting 3: Address of p variable is %u \n",p);
}