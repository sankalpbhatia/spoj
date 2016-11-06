#include<stdio.h>
// test comment
long long int max(long long int a,long long int b)
{
    if(a>b)
        return a;
    else return b;
}
long long int a[10000000];
int main()
{
 long long int i,n;

 scanf("%lld",&n);
 a[0]=0;a[1]=1;
 for(i=2;i<=n;i++)
 {
     a[i]=max(i,a[i/2]+a[i/3]+a[i/4]);
 }
long long ans;
if (n<=10000000)
//printf("%lld\n",a[n]);
ans=a[n];
else
ans=
}
