#include <stdio.h>

int passbyref(int *x)
{
     *x=20;
}

int main()
{
    int a=10;
    int *b=&a;//pointer b will store the memory loacation of variable a;
    passbyref(b);//in this functin if we pass only "a" value it will 
    printf("%d",a);//give error because fuction is defined with pointer
    return 0;       // int * it will only take addresse of variable: 
}