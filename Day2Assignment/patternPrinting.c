#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=7;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==j)
            {
                printf("\\");
            }
            else if((i+j)==n-1)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return(0);
}