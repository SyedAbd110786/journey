#include <stdio.h>
int power(int n,int p)
{
    int temp=n;
    for(int i=1;i<p;i++)
    {
       n=n*temp;
    }
    return n;
}
int main()
{   int n,p;
    printf("Enter number :");
    scanf("%d",&n);
     printf("Enter power:");
    scanf("%d",&p);
    int c=power(n,p);
    printf("%d",c) ;
    return 0;
}