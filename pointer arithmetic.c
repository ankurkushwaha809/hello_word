#include <stdio.h>
int main()
{
    int m = 5, n = 10, o = 0;
    int *p1;
    int *p2;
    int *p3;

    p1 = &m;
    p2 = &n;

    printf("p1 = %u\n",p1);
    printf("p2 = %u\n",p2);

    o = *p1 + *p2;
    printf("*p1+*p2 =%u\n", o);

    p3 = p1 - p2;
    printf("p1-p2 =%u\n", p1);
    p1++;
    printf("p1++ =%u\n ", p1++);
    p1--;
    printf("p2-- =%u\n", p2--);
    return 0;
}