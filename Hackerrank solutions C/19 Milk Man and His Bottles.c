    #include <stdio.h>
    int main()
    {
     int n,b=0,i,m,s=0;
     scanf("%d",&m);
     for( i=0;i<m;i++)
     {
     scanf("%d",&n);
     b=n/10;
     n=n%10;
     s=s+b;
     b=0;
     b=n/7;
     n=n%7;             
     s=s+b;
     b=0;
     b=n/5;
     n=n%5;
     s=s+b;
     b=0;
     b=n/1;
     s=s+b;
     printf("%d\n",s);
     s=0;
     b=0;
     }
     return 0;
    }

