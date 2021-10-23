#include<iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[n];
    
    int max=0,mini,min=0,maxi;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
            maxi=i;
            
        }
        if(a[i]<min){
            min=a[i];
            mini=i;
        }
    }
    
   ans +=maxi;
   ans =ans+(n-(1+mini));
   cout<<ans;



}