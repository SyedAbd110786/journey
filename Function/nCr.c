    #include <stdio.h>
//for n!
int factn(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;

}
int combination(int n,int r)
{
    int combi;
    combi=factn(n)/(factn(r)*factn(n-r));
    return combi;
}

int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    
     for(int i=0;i<=n;i++)
     {
        for(int sp=1;sp<n-i;sp++)
        for(int j=0;j<= 2*i-1;j++)
        {
            int ncj=combination(i,j);
            printf("%d ",ncj);
        }
        printf("\n");
     }
    return 0;
}