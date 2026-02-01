#include <stdio.h>
int main()
{
    float a[7];
    for(int i=0;i<7;i++)
        {
            printf("Enter %d day Temperature :",i+1);
            scanf("%f",&a[i]);
        }
    float sum=0;
    for(int i=0;i<7;i++)
    {
        sum+=a[i];
    }
    float average=sum/7;
    printf("The average temperature of the week is : %.2f",average);
}