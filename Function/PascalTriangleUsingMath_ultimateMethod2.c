#include <stdio.h>

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int i,j,sp;

    for( i=0;i<=n;i++)
    {
    	for(sp=0;sp<=n-i;sp++)
    	{
    		printf(" ");
		}
        int first=1;
        
        for( j=0;j<=i;j++)
        {
            printf("%d ",first);
            first=first*(i-j)/(j+1);//for icj
        }
        printf("\n");
        
    }
    return 0;
}
