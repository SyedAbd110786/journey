#include <stdio.h>

int main()
{
    int a[5]={22,33,44,55,66};
    int *ptr=a;  //array main & lagane ki zaroorat nahi hai .

    printf("Array element using pointers :\n");
    for (int i=0;i<5;i++)
    {
        printf("%d :",*(ptr+i));
        printf("%p\n",(ptr+i));

        // printf("Value: %d  Address: %p\n", *(ptr+i), (void*)(ptr+i));


    }
}