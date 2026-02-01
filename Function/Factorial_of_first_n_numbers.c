#include <stdio.h>
int fact(int nloop)
{
    int factorial=1;
    for(int i=1;i<=nloop;i++)
    {
        factorial *=i;
    }
    return factorial;
}
void printnfactorial(int n)
{
    printf("First %d Factorials \n",n);
    for(int i=1;i<=n;i++)
    {
        int c=fact(i);
        printf("%d,",c);
    }
}
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    printnfactorial(n);

    
    
    
}