 #include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
int dp[3002][3002];
int min(int a,int b)
{
if(a<b) return a;
else return b;
}
int lcs(string a,string b,int l, int m)
{
    int i,j;

    for(i=0;i<=l;i++)
    {
        dp[i][0]=i;
    }

    for(j=0;j<=m;j++)
    {
        dp[0][j]=j;
    }
for(i=1;i<=l;i++)
{


    for(j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            dp[i][j]=dp[i-1][j-1];

            else
                {
                   int temp =min(dp[i-1][j]+1,dp[i][j-1]+1);
                   dp[i][j]=min(temp,1+dp[i-1][j-1]);
                }

        }

}


return dp[l][m];
}

int main()
{
string a, b;
int t;
cin>>t;
while(t)
{
int l,m;
cin>>a;
cin>>b;
l=a.length();
m=b.length();
//printf("hello");
int res=lcs(a,b,l,m);
//cout<<l<<" "<<m;
cout<<res<<endl;
t--;
}
}
