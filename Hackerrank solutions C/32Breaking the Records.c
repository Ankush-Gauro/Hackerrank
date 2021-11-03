    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int max=0;
        int min=0;
        int count=0;
        int count1=0;
        scanf("%d",&a[0]);
        min=a[0];
        max=a[0];
        for(int i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(max<a[i])
            {
                max=a[i];
                count++;
            }
            if(min>a[i])
            {
                min=a[i];
                count1++;
            }
        }
        printf("%d %d",count,count1);

    }

