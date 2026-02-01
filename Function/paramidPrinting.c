#include <stdio.h>

int main()
{
    //paramid
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    //for spaces
    for(int i=1;i<=n;i++)
    {
        //spaces
        for(int sp=0;sp<n-i;sp++)
        {
            printf(" ");
        }
        //for stars
        for(int st=1;st<=2*i-1;st++)
        {
            printf("*");
        }
        printf("\n");
    }
}