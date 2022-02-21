#include<stdio.h>
#include<math.h>

int arm(int);

int main()
{
    int i = 1, result;
    printf("Enter the number:\n");
    scanf("%d", &i);
    result = arm(i);
    if (result == 1)
    {
        printf("It is armstrong number\n");
    }
    else
    {
        printf("It is not a armstrong number\n");
    }
    return 0;
}

int arm(int x)
{
    int sum = 0, r, n;
    n = x;
    while(n > 0)
    {
        r = n % 10;
        sum = sum + (pow(r , 3));
        n = n / 10;
        if(sum == x)
        return 1;
        else
        return 0;
    }
}