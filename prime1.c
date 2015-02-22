#include<stdio.h>
#include<math.h>
void main()
{
    int t;
    long long int m;
    long long int n;
    long long int temp;
    scanf("%ld",&t);
    while(t)
    {

    scanf("%lld",&m);
    scanf("%lld",&n);
    temp=m;
    long int a[100001];
    long long int primes[100001];
    long int j;
    long int i;
    for(i =0;i<=n-m;i++)
    {
        a[i]=1;

    }
   while(m<=n)
   {
    //printf("hi");
   for(i=2;i<sqrt(n);i++)
    {
        if(m%i==0)
        {
            for(j=0;i*j<=(n-m);j++)
           {
              a[i*j]=0;
            printf("\n%d",i*(j));
           }
        }
    }
    m++;
  }
   /* for(i=0;i<n-m;i++)
    {
        if(a[i]==1)
        printf("\n%d",temp+i);
    }*/
    t--;
    //printf("hi");
    }
}
