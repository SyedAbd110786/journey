#include <stdio.h>
int min(int x,int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int gcd(int x,int y)
{
    int hcf;
    for(int i=1;i<=min(x,y);i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
}

int main()
{
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("The highest common factor of %d and %d is : %d",a,b,hcf);


}