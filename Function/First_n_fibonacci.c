#include <stdio.h>

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    //fibonacci series:
   int  previous=0;
   int first=1;
   int next;
        printf("%d %d ", previous,first);  
    for(int i=3;i<=n;i++)
    {
        next=previous+first;
        previous=first;
        printf("%d ",next);
        first=next;
    }
}
