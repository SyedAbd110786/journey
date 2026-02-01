#include <stdio.h>
void fibo(int n)
{
    int first=0;
    int second=1;

    for(int i=0;i<=n;i++)
    {
        printf("%d ",first);
        int next =first+second;
        first=second;
        second=next;
    }
}
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    fibo(n);

    return 0;
}