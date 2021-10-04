#include <iostream>

using namespace std; 
int main(){


    int n;
    cin>>n;
   while(n--){
       int x,count=0;

       cin>>x;

    for(int i=1;i<=x;i++){
        if(x%i==0){
          count++;
        }
        
   }
   cout<<count<<endl;
   }
      
    return 0;
}
