#include<stdio.h>

long long int max(long long int a,long long int b)
{
    if(a>b)
        return a;
    else return b;
}
int main()
{
    int t,j;
    scanf("%d",&t);

    for(j=0;j<t;j++)
    {


    long long int a[10005];
    int i,n;
    long long int m[10005];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }


    m[0]=a[0];
    m[1]=max(m[0],a[1]);

    for(i=2;i<n;i++)
    {
        m[i]=max(m[i-1],a[i]+m[i-2]);

        //printf("m[%lld]=%lld\n",i,m[i]);
    }
    printf("Case %d: %lld\n",j+1,m[n-1]);
    }

    return 0;
}
