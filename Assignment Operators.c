// Working of assignment operators
#include <stdio.h>
int main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("1.c = %d\n", c);
    c += a;     // c is 10 
    printf("2.c = %d\n", c);
    c -= a;     // c is 5
    printf("3.c = %d\n", c);
    c *= a;     // c is 25
    printf("4.c = %d\n", c);
    c /= a;     // c is 5
    printf("5.c = %d\n", c);
    c %= a;     // c = 0
    printf("6.c = %d\n", c);

    return 0;
}