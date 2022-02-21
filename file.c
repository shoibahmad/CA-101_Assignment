#include<stdio.h>
int rec(int);

int main()
{
    int a, b;
    printf("Enter the number you want to print:\n");
    scanf("%d", &a);
    b = rec(a);
    return 0;
}

int rec(int d)
{
    if (d >= 0)
    {
        return d * rec(d - 1);
    }
    else
    {
        return 0;
    }
    
    
}