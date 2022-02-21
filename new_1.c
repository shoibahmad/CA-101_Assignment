#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter the value of integer:\n");
        scanf("%d", &n);
    } while (n != 0);
    printf("You are out of loop!");
    return 0;
}