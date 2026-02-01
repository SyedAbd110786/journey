#include <stdio.h>
 void printname(char name[],int n)
{
    if(n==0)
    {
        return;
    }

    
    printf("%s\n",name);
    printname(name,n-1);


}
int main()
{
    char nam[20];
    int num;
    printf("Enter your name :");
    scanf("%s",&nam);
    printf("How many times you want to print :");
    scanf("%d",&num);
    
    printname(nam,num);


}