#include <stdio.h>
#define N 100
#define M 100

int main()
{
    int arr1[3][3], arr2[3][3], q;
    int sum[3][3];
    int i, j;
    printf("Enter the elements of 1st array \n");

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of Second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("          +");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}