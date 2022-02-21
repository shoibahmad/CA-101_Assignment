#include<stdio.h>


struct car
{
    char *engine;
    int *no;
    char *type;
}car1, car2;

int main()
{
    car1.engine = "It is a new model";
    car2.engine = "It is a old model";

    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);
    return 0;
    
}
