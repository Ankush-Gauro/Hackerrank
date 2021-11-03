    #include<stdio.h>
    main()
    {
        int n,i;
        float b=0,c=0,d=0;
        float e,f,g;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                
            
            if(a[i]<0)
            {
                b++;
            }
            if(a[i]>0)
            {
                c++;
            }
            if(a[i]==0)
            {
                d++;
            }
    }
        
        e=b/n;
        f=c/n;
        g=d/n;
        printf("%f\n%f\n%f",f,e,g);
    }

