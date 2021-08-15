#include <stdio.h>
int main()
{
    int arr[5]={11,22,33,44,55};
    int *p;
    p =&arr[0];
    for (int i = 0; i < 5; i++)
    {
       printf("arr[%d]: the value is %u,the address is %p\n",i,*p,p);
       p++;
    }
    
    
    return 0;
}