#include <stdio.h>

int main()
{
    int a=30;
    int *x=&a;
    int **y=&x;
    printf("The value of a throuugh double ptr :%d\n",**y);
    printf("The address of a :%p\n",x);
    printf("The address of x:%p\n",y);
    printf("The address of y : %p ",&y);
    return 0;
}