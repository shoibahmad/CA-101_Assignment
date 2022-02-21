#include<stdio.h>
int max(int, int);

int main()
{
    int a, b, c;
    printf("Enter the value of a and b:\n");
    scanf("%d%d", &a, &b);
    c = max(a, b);
    printf("The max number is %d", c);
    return 0;
}

int max(int x, int y)
{
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;
}