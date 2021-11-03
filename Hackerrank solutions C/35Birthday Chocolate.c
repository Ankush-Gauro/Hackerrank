
HackerRank C- Birthday Chocolate


Complete the birthday function in the editor below. It should return an integer denoting the number of ways Lily can divide the chocolate bar.

birthday has the following parameter(s):

s: an array of integers, the numbers on each of the squares of chocolate
d: an integer, Ron's birth day
m: an integer, Ron's birth month



    #include<stdio.h>
    int main()
    {
        int n,d,m,sum=0,c=0,k=0,b=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&d);
         scanf("%d",&m);
        while(b!=1)
        {
        
          for(int j=1;j<=m;j++)
          {
              sum=sum+a[k];
              k++;
              }
            if(sum==d)
            {
            c++;
            }
            if(k>n)
            {
                b=1;
            }
            sum=0;
            k=k-m+1;
                      

        }
        printf("%d",c);
        
    }


