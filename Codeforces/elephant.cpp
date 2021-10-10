#include <iostream>
using namespace std;

void finddistance(long long  z,int k,int steps){
  if(z<=k){

      cout<<steps;
  }
  else{
     steps=steps+1;
     finddistance(z,k+5,steps);
     
    
  }

}

int main(){


        long long int n;
        int s=0,t=0;
        cin>>n;
        finddistance(n,s,t);



    return 0;
}