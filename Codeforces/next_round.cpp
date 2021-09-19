
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   int n,k;
   int j=0;
      cin>>n>>k;

           int a[n];



 for(int i=0;i<n;i++){
 
       
       cin>>a[i];
   
    if(a[i]>k)j++;
   
 
   
 }
cout<<j;
return 0;
}