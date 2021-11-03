    #include<stdio.h>
    int main()
    {
        int n,i,max=0,k=0,b=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==max)
            {
                k++;
            }
        }
        printf("%d",k);
    }

