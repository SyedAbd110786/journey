#include <stdio.h>

int main()
{
    //table of 2 and 3
    int table[2][10]={{2,4,6,8,10,12,14,16,18,20},{3,6,9,12,15,18,21,24,27,30}};
      printf("Table of Two \n");
    for(int i=0;i<10;i++)
    {
        printf("2 x %d = %d \n",i+1,table[0][i]);
    }
    printf("Table of Three \n");
    for(int i=0;i<10;i++)
    {
        printf("3 x %d = %d \n",i+1,table[1][i]);
    }

}