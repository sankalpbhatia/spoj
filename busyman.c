#include<stdio.h>


void shellSort(int a[],int b[],int n)
{
    int i,j,k,temp,o,temp1;
    //printf("hello");
	for(i=n/2;i>0;i/=2)
	{
		for(j=i;j<n;j++)
		{
			temp=a[j];
			temp1=b[j];
			for(k=j;k>=i;k-=i)
			{
				if(temp < a[k-i])
				{
					a[k]=a[k-i];
					b[k]=b[k-i];
				}
				else
					break;
			}
			b[k]=temp1;
			a[k]=temp;
		}
	}
}
int main()
{
    int n,i,ans;
    int t;


    scanf("%d",&t);
    while(t--)
    {
        ans=1;

        int t;

        scanf("%d",&n);
        int s[n], e[n];
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&s[i],&e[i]);
        }





        shellSort(e,s,n);

          t=e[0];



        for(i=1;i<n;i++)
        {
            if(s[i]>=t)
            {
              ans++;

              t=e[i];
            }

        }

        printf("%d\n",ans);

    }
    return 0;
}
