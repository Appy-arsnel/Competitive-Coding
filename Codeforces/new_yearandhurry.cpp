#include<iostream>

using namespace std;

int main()
{

    int n,k,time=240,ans=0;
    cin>>n>>k;
     time-=k;

     for(int i=1,j=5;i<=n&&time>=j;j=j+5,i++){

     time-=j;

     ans++;
     }

   cout<<ans;
    return 0;
}