#include<stdio.h>
#define M 50
int main()
{
    int a[M][M], b[M][M], sum[M][M], i, j, m, n;
    printf("Enter the number of rows and columns of first row:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}