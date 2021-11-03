    #include<stdio.h>
    int main()
    {
        int n,b,k=0;
        scanf("%d",&n);
        scanf("%d",&b);
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<j&&(a[i]+a[j])%b==0)
                {
                    k++;
                }
            }
        }
        printf("%d",k);
    }

