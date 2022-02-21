#include <stdio.h>
int main()
{
    int search, arr[6], flag = 1, i;

    printf("Enter the values of arrays:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the number you want to search:\n");
    scanf("%d", &search);
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == search)
        {
            printf("The %d is located on %d location\n", search, i + 1);
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        {
            printf("%d is not found\n", search);
        }
    return 0;
}