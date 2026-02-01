#include <stdio.h>
 void oddNums(int a[], int size)
{
     int count=0;
    for (int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            count++;
        }
    }
    printf("Total odd nums in array : %d",count);
}
int main()
{
   
    int a[5]={22,23,35,44,87};
    oddNums(a,5);
    
}