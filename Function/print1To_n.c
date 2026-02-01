#include <stdio.h>
void print_number(int n)
{
    if(n==0)
    {
        return;
    }
    
    print_number(n-1);
    printf("%d\n",n);
   
    return;
   
}
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    
    print_number(n);
    

}