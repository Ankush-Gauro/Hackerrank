#include<stdio.h>
int main()
{
   long long int min=0,max=0,count=0,temp=0,minsum=0,maxsum=0,c=0;
    long long int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%lld",&a[i])'
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
                                   
             }
        }
    }
    min=a[0];
    max=a[4];
    for(int i=0;i<5;i++)
    {
        if(c==0&&a[i]!=a[i+1])
        {
        
        if(a[i]!=max)
        {
        
        minsum=minsum+a[i];
    }
    if(a[i]!=min)
    {
        maxsum=maxsum+a[i];
    }
    }
    if(a[i]==a[i+1])
    {
            minsum=minsum+a[i];
            maxsum=maxsum+a[i];
            c=1;
                
    }
    }
    printf("%lld %lld ",minsum,maxsum);
    

