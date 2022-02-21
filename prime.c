#include<stdio.h>
#include<conio.h>

int main()
{
    int a, i, flag = 0;
    printf("Enter the value of a: \n");
    scanf("%d", &a);

    for ( i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            flag++;
        }
    }
    
    if (flag == 2)
    {
        printf("It is a prime number!");
    }
    else
    {
        printf("It is not a prime number");
    }
    getch();
    return 0;
}