#include<stdio.h>
#include<conio.h>

void printSpiralClockwise(int m, int n,int arr[][n])
{
    int t=0; 
    int b=m-1;
    int l=0;
    int r=n-1;
    int dir=0;
    int i,j;
    while(t<=b && l<=r)
    {
        dir=dir%4;
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            printf("%d ",arr[t][i]);
            t++;dir=1;
        }
        else if(dir==1)
        {
            for(i=t;i<=b;i++)
                printf("%d ",arr[i][r]);
                r--;dir=2;
        }
        else if(dir==2)
        {
            for(i=r;i>=l;i--)
            printf("%d ",arr[b][i]);
            b--;dir=3;
        }
        else if(dir==3)
        {
            for(i=b;i>=t;i--)
            printf("%d ",arr[i][l]);
            l++;dir=4;
        }
    }
}

void printSpiralAntiCW(int m,int n,int arr[][n])
{
         int t=0;
         int b=m-1;
         int l=0;
         int r=n-1;
         int i,j,dir=0;
         while(t<=b && l<=r)
         {
             dir=dir%4;
         if(dir==0)
         {
             for(i=r;i>=l;i--)
             printf("%d ",arr[t][i]);
            t++;dir=1;
         }
         if(dir==1)
         {
             for(i=t;i<=b;i++)
             printf("%d ",arr[i][l]);
             l++;dir=2;
         }
         if(dir==2)
         {
             for(i=l;i<=r;i++)
             printf("%d ",arr[b][i]);
             b--;dir=3;
         }
         if(dir=3)
         {
             for(i=b;i>=t;i--)
             printf("%d ",arr[i][r]);
             r--;dir=4;
         }
         }

}

int main()
{
    int m=3;
    int n=3;
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf(" Array of %d * %d \n",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("after traversing Clockwise elements are \n");
    printSpiralClockwise(m,n,arr);
    printf("\n After traversing AntiClockwise Elements are \n");
    printSpiralAntiCW(m,n,arr);

    return(0);
}