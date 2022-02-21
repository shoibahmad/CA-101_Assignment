#include <stdio.h>
// matrix multiplication

int main()
{
    int A[50][50], B[50][50], C[50][50], c1, r1, c2, r2, i, j, k;
    printf("enter the no of columns and rows of the first matrix:");
    scanf("%d %d", &c1, &r1);
    printf("enter the no of columns and rows of the second matrix:");
    scanf("%d %d", &c2, &r2);
    if (c1 == r1)
    {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
            {
                printf("enter the element A[%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);
            }
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
            {
                printf("enter the element B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);
            }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("multiplication isn't possible");
    return 0;
}
