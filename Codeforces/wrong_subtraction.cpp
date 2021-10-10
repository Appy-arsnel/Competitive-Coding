#include <iostream> 
using namespace std;

int main(){
    long long int n,t;
    cin>>n>>t;
    while(t>0){
        if(n%10==0){
            n=n/10;
            
        }
        else{    
            n=n-1;
        }
     t--;
    }
    cout<<n;

    return 0;
}