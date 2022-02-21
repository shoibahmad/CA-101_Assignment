#include<stdio.h>
#define M 50
int main()
{
    int first[M], second[M], sum = 0, i, j, m, n;
    printf("Enter the elements of first matrix:\n");
    scanf("%d", &m);
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter the elements of second array:\n");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        for ( i = 0; i < n; i++)
        {
            sum = first[i][j] + second[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}