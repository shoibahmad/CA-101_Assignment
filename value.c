#include<stdio.h>

int main()
{
    printf("Integer values\n\n");
    printf("%d %d %ld\n", 32767, 32767+1, 32767+10);
    printf("\n");
    printf("Long Integers values\n\n");
    printf("%ld %ld %ld\n", 32767L, 32767L + 1L, 32767L+10L);
    return 0;
}
