#include <stdio.h>
int main()
{
    int i;
    double number, sum = 0.0;
    for (i = 0; i <= 10; i++)
    {
        printf("enter%d: ", i);
        scanf("%lf", &number);
        if (number < 0.0)
        {
            break;
        }
        sum += number; //sum = sum + number
    }
    printf("Sum = %.2lf", sum);
    return 0;
}