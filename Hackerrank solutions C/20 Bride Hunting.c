    #include<stdio.h>
    int main()
    {
      int n,m,i,g[50][50],j,p,q,max=0,cnt=0,k=1,c=0,u=1,x[30],y[30],t1,min=0,
      sc[50],e,f,ct=0,a[50],count=0,t2=0,t=0;
      scanf(“%d %d”,&n,&m);
      for(i=1;i<=n;i++)
      {
      for(j=1;j<=m;j++)
      {
      scanf(“%d”,&g[i][j]);
      }
      }
      g[1][1]=0;
      for(i=1;i<=n;i++)
      {
        for(j=1;j<=m;j++)
        {
         cnt=0;
         if(g[i][j]==1)
         {
           t++;
           for(p=i-1;p<=i+1;p++)
           {
             for(q=j-1;q<=j+1;q++)
             {
              
              if(g[p][q]==1)
              {
                cnt++;
              }
             }
           }cnt=cnt-1;
           a[k]=cnt;
           k++;
           }
        }
      }
           for(k=1;k<=t;k++)
           {
             if(a[k]>max)
             max=a[k];
           }
           if(max==0)
           {
           printf(“No suitable girl found”);
           return 0;
           }
           for(k=1;k<=t;k++)
           {
             if(a[k]==max)
             c++;
           }
           for(k=1;k<=t;k++)
           {
             t2=0;
             if(a[k]==max)
             {
               for(i=1;i<=n;i++)
               {
                 for(j=1;j<=m;j++)
                 {
                   if(g[i][j]==1)
                   t2++;
                   if(t2==k)
                   {
                     x[u]=i;
                     y[u]=j;
                     u++;
                   }
                }
               }
             }
           }
          t1=u-1;
          if(c==1)
          printf(“%d:%d:%d”,x[1],y[1],max);
          else
          {
            for(u=1;u<=t1;u++)
            {
              sc[u]=sqrt(((x[u]-1) * (x[u]-1)) + ((y[u]-1)*(y[u]-1)));;
            }
            min=sc[1];
            for(u=1;u<=t1;u++)
            {
              if(sc[u]<min)
              min=sc[u];
            }
            for(u=1;u<=t1;u++)
            {
              if(sc[u]==min)
              count++;
            }
            if(count>1)
            printf(“Polygamy not allowed”);
            if(count==1)
            {
              for(u=1;u<=t1;u++)
              {
                if(sc[u]==min)
              printf(“%d:%d:%d”,x[u],y[u],max);
            }
          }
        
         }
       return 0;
    }

