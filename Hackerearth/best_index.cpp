

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,splsum=0;

	cin >> n;

     int a[n];
   for(int i=0;i<n;i++){
         cin>>a[i];
     
     for(int i=0;i<n;i++){
         int sum=0,k=1,index;
           index=i;
           for(int j=0;j<k;k++){
              
              if(index==n)
              {
                  break;
              }
             sum=a[index]+sum;
            
              index++;
              
          cout<<index<<endl;
         }
         if(splsum<sum){
             

	cin >> n;	
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     for(int i=0;i<n;i++){
         int sum=0,k=1;
         
           for(int d=i;d<k&&i<n;k++){
             sum=a[i];
             i++;

         }
         if(splsum<sum){

             splsum=sum;
         }
     }

    cout<<splsum;

    return 0;							
}

