
#include <bits/stdc++.h>

using namespace std;
int areSame(int arr[],
             int n)
{
  int first = arr[0];
 
  for (int i = 1; i < n; i++)
    if (arr[i] != first)
      return 0;
  return 1;
}
int main() {
	int n,i,j;
	bool same;
	cin >> n;										
	int a[n],b[n];	
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
     for(i=0;i<n;i++){
        cin>>b[i];
    }
    j=0;
    for(i=0;i<n;i++){
            j++;
            
       if(a[i]>=b[i]){
           a[i]=a[i]-b[i];
       }
        int k=areSame(a,n);
       if(k==1){
        cout<<j;

       }
       else{
           if(i==n-1)
            cout<<"-1";
           }
       
    }
    
return 0;
}



