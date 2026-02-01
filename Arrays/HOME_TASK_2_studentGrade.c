#include <stdio.h>

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter %d student Marks :",i+1);
        scanf("%d",&a[i]); 
    }
    int high=a[0],sum=0;
    for(int i=0;i<5;i++)
    {
        if(high<a[i])
        {
            high=a[i];
        }
        sum +=a[i];
    }
    printf("The highest grade is : %d\n",high);
    int average=sum/5;
    printf("The average marks of the students : %d",average);
}