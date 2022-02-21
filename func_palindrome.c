#include<stdio.h>
int pdr(int);

int main()
{
    int num, result;
    printf("Enter the number:\n");
    scanf("%d", &num);
    result = pdr(num);
    if (result == 1)
    {
        printf("%d is palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome", num);
    }
    return 0;
}

int pdr(int num)
{
    int rnum = 0, r, n;
    n = num;
    while (n > 0)
    {
        r = n % 10;
        rnum = rnum * 10 + r;
        n = n / 10;
    }
    if (rnum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}