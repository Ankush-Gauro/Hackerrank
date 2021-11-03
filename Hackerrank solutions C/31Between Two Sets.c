    #include<stdio.h>

    int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a); } int lcm(int x, int y ) {

    if(x==0)
        return 0;
    return (x*y)/gcd(x,y);
    }

    int main() { int n,m; scanf("%d %d",&n,&m); int a[n],b[m];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0; j<m; j++)
    {
        scanf("%d",&b[j]);
    }


    int x=a[0];
    int y=b[0];

    for(int i=0; i<n; i++)
    {

         x=lcm(x,a[i]);


    }
    for(int j=0; j<m; j++)
    {
        y=gcd(y,b[j]);
    }

    int k=1;
    int count=0;
    int num=x;
    while(x<=y)
    {

        if(y%(x)==0) count++;

        k++;
        x=num*k;
    }
    printf("%d",count);
    }

