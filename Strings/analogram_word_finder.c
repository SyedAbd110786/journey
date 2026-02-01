#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[40];
    char str2[40];

    printf("Enter string 1 :");
    scanf("%s",str1);

     printf("Enter string 2 :");
    scanf("%s",str2);
    int temp1,temp2,sumt1=0,sumt2=0;
    for (int i=0;str1[i] != '\0';i++)
    {
        sumt1=sumt1 + (int)str1[i];
        sumt2=sumt2 + (int)str2[i];
    }

    printf("%d %d",sumt1,sumt2);
    if(sumt1==sumt2)
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }

}
