#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[n];
    

    int mini= distance(a,min_element(a,a+n));
    int maxi= distance(a,max_element(a,a+n));

         cout<<maxi<<"\n\n"; 

        mini= n-(mini+1);
        cout<<mini<<"\n\n";
        
   ans =ans+maxi;
   ans =ans+(n-(1+mini));
   cout<<ans;



}