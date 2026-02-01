#include <stdio.h>

int main()
{
    int a[100];
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++)
    {
        printf("Enter value at a[%d] :",i);
        scanf("%d",&a[i]);

    }
    printf("Original array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

   
    int temp[size];

    for(int i=0;i<size;i++)
    {
            temp[i]=a[size-1-i];   
    }
    
     printf("Reversed array : ");
     for(int i=0;i<size;i++)
    {
        printf("%d ",temp[i]);
    }

}