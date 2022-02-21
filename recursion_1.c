#include<stdio.h>

long int fact(int);

int main()
{
    int i;
    printf("Enter the number of which you want factorial:\n");
    scanf("%d", &i);
    printf("The factorial of %d is %ld", i, fact(i));
    return 0;
}

long int fact(int n)
{
    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}