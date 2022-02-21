#include <stdio.h>

int main()
{
    int thanks, num, neg;
    char ans = 'n';

    neg = 0;

    while (ans == 'N' || ans == 'n')
    {
        printf("Are you ready ? : ");
        scanf("%d", &num);

        if (num < 0)
            neg++;

        fflush(stdin);

        printf("\n Will you accept my proposal ? ");
        scanf("%c", &ans);
    }

    printf("I love you \n", thanks);

    return 0;
}