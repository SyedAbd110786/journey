#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    int temp=a;
    a=b;
    b=temp;
    printf("a = %d \n b = %d",a,b);

    return 0;
}