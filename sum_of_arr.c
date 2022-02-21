#include<stdio.h>

int main()
{
    int a[10];
    int sum = 0, i;
    printf("Enter the value of array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum is %d", sum); 
    
    return 0;
}