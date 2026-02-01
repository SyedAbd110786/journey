#include <stdio.h>

int main()
{
    int a[5];
    int *ptr=&a[0];
    for(int i=0;i<5;i++)
    {
    printf("Enter %d index :",i);
    scanf("%d",ptr+i);
    }
    for(int i=0;i<5;i++)
    {
        printf("value at index %d=%d\n",i,*(ptr+i));
    }

}