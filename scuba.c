#include<stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}

int dp[1004][22][80];
int main()
{
    int c,t,a,n,ox,ni,j,k;
    int oo[1002],nn[1002],w[1002];


    scanf("%d",&c);
    while(c)
    {
    scanf("%d %d",&ox,&ni);
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&oo[i],&nn[i],&w[i]);
    }


    for(j=0;j<=ox;j++)
    {
        for(k=0;k<=ni;k++)
            dp[0][j][k]=1000000000;
    }


dp[0][0][0]=0;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<=ox;j++)
        {

            {
                for(k=0;k<=ni;k++)
                {

                if(j==0 &&k==0)
                    dp[i][j][k]=0;
                else
                dp[i][j][k] = min(dp[i-1][j][k], w[i] + dp[i-1][max(0,j-oo[i])][max(0,k-nn[i])]);


                //printf("hi");
                }
            }



        }

    }
    printf("%d\n",dp[n][ox][ni]);
    c--;
    }

    return 0;
}
