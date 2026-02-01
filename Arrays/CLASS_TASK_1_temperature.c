#include <stdio.h>

int main()
{
    float t[7];
    for(int i=0;i<=6;i++)
    {
        printf("Enter day %d Temperature :",i+1);
        scanf("%f",&t[i]);
    }

    int sum=0;
    float high=t[0],low=t[0];

    for(int i=0;i<=6;i++)
    {
        sum=sum+t[i];

        if(high<t[i])
        {
            high=t[i];
        }
        if(low>t[i])
        {
            low=t[i];
        }
    }
    int average=sum/7;
    printf("The average Temperature of the week is : %d \n",average);
    printf("The highest Temperature is = %.2f\n",high);
    printf("The lowest Temperature is = %.2f\n",low);

}