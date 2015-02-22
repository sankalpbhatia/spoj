#include<stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    int t,vm,n;
    int v[62],c[62],u[62];
    int va[188],ca[188],flag[188];
    int mtg[62];
    int dp[62][3202];
    scanf("%d",&t);
    while(t)
    {
        scanf("%d %d",&vm,&n);
        vm=vm/10;
        int i,j;
        for(i=1;i<=n;i++)
        {
            scanf("%d %d %d",&v[i],&c[i],&u[i]);
            v[i]=v[i]/10;

        }

        for(i=0;i<=vm;i++)
            dp[0][i]=0;
        for(i=1;i<=n;i++)
            dp[i][0]=0;

        for(i=1;i<=n;i++)
        {
            if(u[i]!=0)
            {
                k=3*(u[i]);
                if(flag[k]!=1)
                {
                    va[k]=v[i];
                    ca[k]=c[i];
                    k++;
                    flag[k]=1;

                }
            }
        }

        for(i=1;i<=n;i++)
        {
            if(u[i]==0)
            {
                for(j=1;j<=vm;j++)
                {
                    if(j>=v[i])
                    {
                        if (dp[i-1][j]<=v[i]*c[i]+dp[i-1][j-v[i]])

                        {
                            dp[i][j]=v[i]*c[i]+dp[i-1][j-v[i]];

                        }
                        else
                        {
                            dp[i][j]=dp[i-1][j];
                            //mtg[i]=0;
                        }

                    }

                    else
                    dp[i][j]=dp[i-1][j];
                }

            }
            else
            {
               if(mtg[u[i]]==1)
               {
                   for(j=1;j<=vm;j++)
                {
                    if(j>=v[i]+v[u[i]])
                    {
                        if (dp[i-1][j]<=v[i]*c[i]+dp[i-1][j-v[i]])

                        {
                            dp[i][j]=v[i]*c[i]+dp[i-1][j-v[i]];
                            mtg[i]=1;
                            v[u[i]]=v[u[i]]+v[i];
                            //iprev=i;
                        }
                        else
                            dp[i][j]=dp[i-1][j];

                    }
                   else
                    dp[i][j]=dp[i-1][j];

                }
               }


            }


        }



        printf("%d\n",dp[n][vm]*10);
        t--;
    }
}
