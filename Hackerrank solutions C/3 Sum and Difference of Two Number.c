    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>

    int main()
    {
        int a=0,b=0,sum=0,dif=0;
        float a1=0,b1=0,sum1=0,dif1=0;
        scanf("%d%d",&a,&b);
        scanf("%f%f",&a1,&b1);
        sum=a+b;
        sum1=a1+b1;
        dif=a-b;
        dif1=a1-b1;
        printf("%d %d\n",sum,dif);
    	printf("%.1f %.1f",sum1,dif1);

        
        return 0;
    }

