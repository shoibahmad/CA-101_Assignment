#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number of elements you want to enter in the array:\n");
    scanf("%d", &x);
    int a[x];
    int i;
    printf("Enter all the %d elements:\n", x);
    for ( i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements in reverse order:\n");
    for ( i = x - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}