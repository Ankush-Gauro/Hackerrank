    #include<stdio.h>
    int main()
    {
        int x1,x2,v1,v2;
        scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
       
        if(x2>x1&&v2>v1){
           printf("NO");
        }
        else{
            for(int i=0;i<10000;i++){
                x1+=v1;
                x2+=v2;
                if(x1==x2){
                    printf("YES");
                    exit(0);
                }
            }
         printf("NO");   
        }

    }

