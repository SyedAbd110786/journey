#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[]="Aabdullah";
    char arrup[50];
    
    for(int i=0;arr[i]!='\0';i++)
    {
        arr[i] = toupper(arr[i]);
    }
    for(int i=0;arr[i]!='\0';i++)
    {
        
        if(arr[i]==arr[i+1])
        {
            printf("%c",arr[i]);
            i++;
        }
        else
        {
            printf("%c",arr[i]);
        }
    }
 
    return 0;
}