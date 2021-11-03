    #include <stdio.h>
    int main() {
    int m,x,i,a[1000],sum=0,s;
    scanf("%d %d",&m,&x);
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    if(sum>x)
        printf("Thank you, your order for %d eggs are accepted\n",x);
    else
    {
        printf("Sorry, we can only supply %d eggs\n",sum-1);
        x=sum-1;
    }
    for(i=0;i<m;i++)
    {
        if(x>=a[i])
        {
            printf("%d\t%d\t%d\n",a[i],a[i],0);
            x=x-a[i];
        }
        else if(x<a[i])
        {
            s=a[i]-x;
         printf("%d\t%d\t%d\n",a[i],x,s);
         x=0;
         }
        
         else if(x==0)
         printf("%d\t%d\t%d\n",a[i],0,a[i]);
       
    }
     return 0;
    }

