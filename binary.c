#include<stdio.h>
int nonrecbin(int num);
int recbin(int num);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Decimal to binary Using recursion : %d\n", recbin(num));
    printf("Decimal to binary without using recursion : %d\n", nonrecbin(num));
}
int nonrecbin(int num)
{
    int x, res = 0, pos = 1;
    while (num != 0)
    {
        x = num % 2;
        res = res + (x*pos);
        pos = 10*pos;
        num = num / 2;
    }
    return res;
}
int recbin(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return ((num % 2) + 10 * recbin(num / 2));
    }
}