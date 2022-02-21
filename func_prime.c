#include<stdio.h>
int prime(int);

int main()
{
    int a, result;
    printf("Enter the number to check whether it is prime or not:\n");
    scanf("%d", &a);
    result = prime(a);
    if (result == 1)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d is not a prime number", a);
    }
    
    return 0;
}
int prime(int a)
{
    int i;
    for (i = 2; i < a - 1; i++)
    {
        if(a % i == 0)
        return 0;
    }
    return 1;
}