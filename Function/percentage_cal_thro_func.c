#include <stdio.h>
float per(float a, float b, float c)
{
    return ((a+b+c)/300)*100;
}
int main()
{
    float eng,math,pf;
    printf("Enter English Marks :");
    scanf("%f",&eng);
     printf("\nEnter Math Marks :");
    scanf("%f",&math);
     printf("\nEnter PF Marks :");
    scanf("%f",&pf);
    printf("Percentage : %f",per(eng,math,pf));

}