#include <iostream>
#include<stdio.h>
#include <map>


using namespace std;
 map<int ,long long> arr;






long long int exchange(long long int n)
{
if(n==0)
return 0;



if((arr[n])!=0){return arr[n];}
//cout<<arr[n]<<" "<<n <<"\n";
long long aux;
aux=exchange(n/2)+exchange(n/3)+exchange(n/4);
if(aux>n)
    arr[n]=aux;
else arr[n]=n;

return arr[n];


}

int main()
{
int  a;

while(scanf("%d",&a)==1)
{


printf("%lld\n",exchange(a));
}
//int j;
//for(j=0;j<=n;j++){cout<<"arr["<<j<<"]: "<<arr[j]<<endl;}

return 0;
}
