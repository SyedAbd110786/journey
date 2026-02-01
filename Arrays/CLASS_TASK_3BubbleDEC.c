#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Original array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nArray in Descending Order : ");
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}
