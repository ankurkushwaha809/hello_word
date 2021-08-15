#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter the two number:\n");
    scanf("%d%d",&number1,&number2);

    if (number1==number2)
    {
        printf("both are equals: %d=%d",number1,number2);
    }
    else if (number1<number2)
    {
        printf("Is less than : %d < %d",number1,number2);
    }
    else
    {
        printf("Is more than : %d > %d",number1,number2);
    }
    return 0;
    
}