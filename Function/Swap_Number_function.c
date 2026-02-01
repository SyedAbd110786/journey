#include <stdio.h>
void swap(int *a,int *b)//pointer ka kaam hai address store karna 
{
       /*pointer us variable (or  memory location )ki address 
                  pr jo bhi value hai us ko    point      kata hai*/
    *a=*a+*b; 
    *b=*a-*b;
    *a=*a-*b;
    // int temp=a;
    // a=b;
    // b=temp;
    return;
}
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b); //& (semperson sign) sends address of variable
    printf("a = %d \nb = %d",a,b);
    return 0;

}