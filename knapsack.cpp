#include<stdio.h>
#include<iostream>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int w[2002],c[2002],m[2][2002];
using namespace std;
int main()
{
    int s,n,i,j;

    cin>>s>>n;
    for(i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i];
    }


    //int sumw=0;

    for(i=1;i<=n;i++)
    {
        //sumw=sumw+w[i];
        for(j=1;j<=s;j++)
        {
            if(i%2)
            {



            if(w[i]<=j)
            {

               // printf("%d %d %d\n",i,j,w[i]);
                m[1][j]=max(m[0][j],c[i]+m[0][j-w[i]]);

            }
            else m[1][j]=m[0][j];
            }

            else
            {

                if(w[i]<=j)
            {

               // printf("%d %d %d\n",i,j,w[i]);
                m[0][j]=max(m[1][j],c[i]+m[1][j-w[i]]);

            }
            else m[0][j]=m[1][j];


            }
        }
    }

//printf("%d",n&1);
    if(n%2)
    printf("%d\n",m[1][s]);
    else
    printf("%d\n",m[0][s]);



}

