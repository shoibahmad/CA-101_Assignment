#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Enter the number: \n");
    scanf("%d", &x);
    printf("Even numbers are: ");
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
            printf("%d\t", i);
    }
    printf("\n");

    printf("Odd number are: ");
    for (int j = 1; j <= x; j += 2)
    {
        printf("%d\t", j);
    }
    getch();
    return 0;
}