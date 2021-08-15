#include <stdio.h>
int main()
{

    int first, second, temp;
    printf("enter the first integer:");
    scanf("%d", &first);
    printf("enter the second integer:");
    scanf("%d", &second);

    temp = first;
    first = second;
    second = temp;
    printf("\nafter swaping, the first integer =  %d", first);
    printf("\nafter swaping, the second integer = %d", second);
    return 0;
}
