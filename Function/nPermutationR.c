#include <stdio.h>

int nfact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}

//for nPr
int permu(int n,int r)
{
    int  c=nfact(n)/nfact(n-r);
    return c;
}

int main()
{
    int n,r;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter r :");
    scanf("%d",&r);
    int c=permu(n,r);
    printf("%dPermutaion%d = %d",n,r,c);
    
    return 0;
}