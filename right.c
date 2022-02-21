#include<stdio.h>

int main()
{
    int a[3][3], i, j, sum = 0;
    printf("Enter the elements of matrix: \n");
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            if (i + j == 3 - 1)
            {
                sum += a[i][j];
            }   
        }
        printf("\n");
    }
    printf("%d", sum);
    return 0;
}