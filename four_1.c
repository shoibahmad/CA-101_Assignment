#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the values of a, b, c, d: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greater", a);
            }
            else
            {
                printf("%d is greater", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is greater", b);
        }
        else
        {
            printf("%d is greater", d);
        }
    }
    else if (c > d)
    {
        printf("%d is greater", c);
    }
    else
    {
        printf("%d is greater", d);
    }
    
    getch();
    return 0;
}