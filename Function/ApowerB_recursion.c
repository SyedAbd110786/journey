#include <stdio.h>

int power(int n,int p)
{
   if(p==0)
   {
    return 1;
   } 
   return n *power(n,p-1);
}

int main()
{
    int n,p;
    printf("Enter number :");
    scanf("%d",&n);

    printf("Enter Power :");
    scanf("%d",&p);

    int c=power(n,p);
    printf("%d^%d=%d",n,p,c);

}