#include<stdio.h>
#include<conio.h>
int main()
{
int a[4][4]={5,1,9,11,2,4,8,10,13,3,6,7,15,14,12,16};
int i,j;
int b[3][3]={1,2,3,4,5,6,7,8,9};
    int k,l;
/*printf("Enter 4 Row And 4 Column\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        scanf("%d",&a[i][j]);
    }
}*/
printf("Array we have is\n \t\t\t");
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            printf("%d\t",b[k][l]);
        }
        printf("\n\t\t\t");
    }
    printf("\nAfter 90' clockwise\n \t\t\t");
    for(k=0;k<=2;k++)
    {
        for(l=2;l>=0;l--)
        {
            printf("%d\t",b[l][k]);
        }
        printf("\n \t\t\t");
    } 
printf("\nYou have entered\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("\nAfter 90' clockwise rotation it is\n\n");
for(i=0;i<4;i++)
{
    for(j=3;j>=0;j--)
    {
        printf("\t %d",a[j][i]);
    }
    printf("\n");
    
}
    
return(0);
}