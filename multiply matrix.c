#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    printf("enter the number of row:\n");
    scanf("%d", &r);

    printf("enter the number of colum:\n");
    scanf("%d", &c);

    printf("enter the first element of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("enter the second element of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("multiply the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[10][10] = 0;

            for (int k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    //  for printing result    ​
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}