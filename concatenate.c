//Code to copy a strings
int conc(char, char);
int cop(char, char);
#include<string.h>

int main()
{
    char str1[20] = "Hello ", str2[20] = "World";
    int x;

    x = conc(str1, str2);
    printf("%s", x);
    printf("\n");
    int s;
    s = conc(str1, str2);
    printf("%s", s);

    return 0;
}

int conc(char x, char y)
{
    char s;
    s = strcpy(x, y);
}
int cop(char w, char r)
{

    return strcpy(w, r);
}