#include<its/stdc++.h>
using namespace std;
int main(){
   long long int n;
   cin>>n;
    int a[n],q=0;
   for(int i=0;i<n;i++) {

       cin>>a[i];
   }
   
   for(int i=0;i<n;i++) {

       if (a[i]==a[i+1]&& i!=n-1)
       {
           q++;
       }

      
       
   }



    return o;
}