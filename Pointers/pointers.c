#include <stdio.h>

int main()
{
    int a=20;
    int *ptr=&a;

    printf("The value of a : %d\n",a);
    printf("Addres  of a : %d\n",&a);
    printf("The value of ptr : %d\n",ptr);
    printf("The value of a : %d\n",*ptr);


    return 0;
}