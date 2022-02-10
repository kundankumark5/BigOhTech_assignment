/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,l=0,m=1;
    int last;
    printf("Enter a no\n");
    scanf("%d",&n);

    while(n!=0)
    {
    n=n/10;
    l++;
    }
    for(int j=0;j<l;j++)
    {
        m=m*10;
    }
    m;
    last=n%m;
    if( last == 3)
    {
            n=n-3;
            n=n+2;
    }
    if(last==5)
    {
        n=n-5;
        n=n+3;
    }
    if(last==7)
    {
        n=n-7;
        n=n+5;
    }
    else{
        printf("not a prime no entered");
    }
    return 0;
}*/