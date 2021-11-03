    #include<stdio.h>
    main()
    {
        int i,j,sum=0,sum1=0,sum2=0,n;
        scanf("%d",&n);
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {    scanf("%d",&a[i][j]);
        }    
        }
        i=0;
        for(j=0;i<n&&j<n;j++)
        {
            sum1=sum1+a[i][j];
            i++;
        }
        i=n-1;
        for(j=0;i>=0&&j<n;j++)
        {
            sum2=sum2+a[i][j];
            i--;
        }
        sum=sum1-sum2;
        if(sum<0)
        {
            sum=sum*-1;
        }
        printf("%d",sum);
        
    }

