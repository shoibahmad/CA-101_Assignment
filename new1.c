#include<stdio.h>
int add(int*,int*);
int sub(int*, int*);
int mult(int*, int*);

int main()
{
    int a, b, c, d, e, f, g, h, sum;
    printf("Enter the number which you want to multiply:\n");
    scanf("%d%d", &a, &b);
    c = add(&a, &b);
    printf("The addition of %d and %d is %d\n\n", a, b, c);
    printf("Enter the number which you want to subtract:\n");
    scanf("%d%d", &d, &e);
    f = sub(&d, &e);
    printf("The subtraction of %d and %d is %d\n\n", d, e, f);
    printf("Enter the numbers which you want to multiply:\n");
    scanf("%d%d", &g, &h);
    sum = mult(&g, &h);
    printf("\nThe multiplication of %d and %d is %d", g, h, sum);
    return 0;
}

int add(int *x, int *y)
{
    return (*x + *y);
}
int sub(int *y, int *i)
{
    return (*y - *i);
}
int mult(int *u, int *r)
{
    return (*u * *r);
}