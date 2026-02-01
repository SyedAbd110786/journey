#include <stdio.h>
//for n!
int nfact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
//for calculating combination.
int combi(int n,int r)
{
    int c;
    c=nfact(n)/(nfact(r)*nfact(n-r));
    return c;

}

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

  for(int i=0;i<=n;i++)
  {
    //spaces
    for(int sp=0;sp<=n-i;sp++)
    {
        printf(" ");
    }
    for(int j=0;j<=i;j++)
    {
        int c=combi(i,j);
        printf("%d ",c);
    }
    printf("\n");
  }
    
    return 0;
}