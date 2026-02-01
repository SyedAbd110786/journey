#include <stdio.h>

int main()
{
    
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    
    for(int i=0;i<size;i++)
    {
        printf("Enter value at a[%d] :",i);
        scanf("%d",&a[i]);

    }
    printf("oringinal array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //Ascending order
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }

    }
     printf("sorted array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}