#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3], i, j, sum = 0;
    printf("Enter the elements: ");
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
            printf("%d ", a[i][j]);
            if (i == j)
        {
        sum += a[i][j];
        }
        }
        printf("\n");
    }
    
    printf("sum = %d\n", sum);
    getch();
    return 0;
}