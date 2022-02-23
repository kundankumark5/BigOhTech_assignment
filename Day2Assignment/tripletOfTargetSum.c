#include<stdio.h>
#include<conio.h>
int targetSumInArr(int a[],int a_size, int targetSum)
{
    int l,m,r;
   int e[3];
    
    for(int i=0;i<a_size-2;i++)
    {
        for(int j=i+1;j<a_size-1;j++)
        {
            for(int k=j+1;k<a_size;k++)
            {
                if(a[i]+a[j]+a[k]==targetSum)
                {
                    int s[3]={a[i],a[j],a[k]};
                    for(int l=0;l<3;l++)
                    {
                        m=l+1;
        while(m<3)
        {
            if(s[l]>s[m])
            {
                e[l]=s[l];
                s[l]=s[m];
                s[m]=e[l];
            }
            m++;
        }
                         
                    }
                    
                    printf("triplets are ");
                    for(int l=0;l<3;l++)
                    {
                        printf(" %d,",s[l]);

                    }
                    
                return(1);
                
                }
            }
        }
    }
    return(0);
}
int main()
{
    int q;
    int a[]={10,1,8,45,6,4};
    int targetSum=22;
    int a_Size= sizeof(a)/sizeof(a[0]);
   q= targetSumInArr(a,a_Size,targetSum);
   if(q==1)
   printf("Triplets found\n");
   else
   printf("Triplets not found");
    return 0;
}

