#include <stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
  return n+sum(n-1);
    
}
void printNum(int n)
{
    if(n==1)
    {
        printf("1");
        return;
    }
    printf("%d +",n);
    printNum(n-1);
    
}
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
     int c=sum(n);
      printNum(n);
     printf(" = %d",c);
    
}