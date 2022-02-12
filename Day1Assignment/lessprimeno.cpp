#include<bits/stdc++.h>
using namespace std;

int  main()
{
    char n[10];
    int less=1,digit,i;
    cout<<"Enter any no\n";
    cin>>n;
  char last=n[0];
    cout<<"last \n"<<last;
    digit= strlen(n);

    
        int t=digit;
         char q[t];
       // for(int i=t;i>1;t--)
     //  {
           if(n[t-1]>7)
           {
              //for(i=digit-1; i=>0;i--)
              //{
                 i=digit-1;
                while(n[i]!='\0')
                {
                q[i-1]='7';
                i--;
                }
            }
            if(7>=n[t-1]>5)
           {
              //for(i=digit-1; i=>0;i--)
              //{
                 i=digit-1;
                while(n[i]!='\0')
                {
                q[i-1]='5';
                i--;
                }
            }
            if(5>=n[t-1]>3)
           {
              //for(i=digit-1; i=>0;i--)
              //{
                 i=digit-1;
                while(n[i]!='\0')
                {
                q[i-1]='3';
                i--;
                }
            }
            if(3>n[t-1]>2)
           {
              //for(i=digit-1; i=>0;i--)
              //{
                 i=digit-1;
                while(n[i]!='\0')
                {
                q[i-1]='2';
                i--;
                }
           }
                if(2>n[t-1]>1)
           {
              //for(i=digit-1; i=>0;i--)
              //{
                 i=digit-1;
                while(n[i]!='\0')
                {
                q[i-1]='1';
                i--;
                }
            }
            
            
       // }
        cout<<"less prime no= "<<q;

    return 0;
}