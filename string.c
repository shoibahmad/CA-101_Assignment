#include<string.h>
#include<stdio.h>

int main()
{
    char a[100];
    char b[100];
    puts("Enter the characters which you want to get in the screen");
    gets(a);
    puts("Enter the second string:");
    gets(b);
    int cmp = strcmp(a, b);
    if(cmp == 0)
    printf("It is equal");
    else
    printf("It is not equal");
    return 0;
}