#include<stdio.h>
#include<math.h>

int  main()

{
long long int m,n,ct;

// int m,n;
int i;
/*long int a[100000];
for( i=0;i<100000;i++)
a[i]=1;*/
//scanf("%d",&n);


//int primes[1000000001];
int primes[32001];
int p [32001];
primes[0]=0;
primes[1]=0;
 //scanf("\n%lld",&m);
 //scanf("\n%lld",&n);
 for(i=2;i<=32000;i++)
 {
     primes[i]=1;
 }

     for(i=2;i<=sqrt(32000);i++)
     {
         if(primes[i]==1)
         {
             int j;
             for(j=i*2;j<=32000;j=j+i)
            {
                primes[j]=0;

             }
         }
     }
    int j=0;
     for(i=2;i<=32000;i++)
     {
         if(primes[i]==1)
         {
             p[j++]=i;
         }
     }
    //for(i=0;i<j;i++)
   // printf("%d\n",p[i]);
  // printf("%d",p[0]);

     int t;
     scanf("%d",&t);
     while(t)
     {
        scanf("%lld %lld",&m,&n);
        int flag=0;
        for(ct=m;ct<=n;ct++)
        {   int flag=0;
            for(i=0;p[i]*p[i]<=ct;i++)
            {
             if(ct%p[i]==0)
             flag=1;
            }

            if(flag==0&&ct!=1)
            {
             printf("%lld\n",ct);
            }
        }
        t--;
     }


 }

