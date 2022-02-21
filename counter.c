//Take a number as a input from the user at the end the code will display numbers of digit entered by the user

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, counter = 0;
    printf("Enter the numbers which you want to count:\n");
    scanf("%d", &a);

    do
    {
        a /= 10;
        ++counter;
    } while (a != 0);
    printf("The total number of digits are %d", counter);
    getch();
    return 0;
}