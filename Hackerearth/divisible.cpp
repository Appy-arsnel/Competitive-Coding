

#include <iostream>
#include <math.h>


using namespace std;

int main() {
    int n,i;
    int a[n];
    cin>>n;
    for(i=0;i<n;i++){
        if(i<n/2){
        cin>>a[i];
       

        }
        else{
            cin>>a[i];
        }
       
    }
        int number=0;
        int digits;

    for(i=0;i<n;i++){
          if(i>=n/2)
          a[i]=a[i]%10;
          else{

        digits = (int)log10(a[i]);
        a[i] = (int)(a[i]/ pow(10, digits));
          }
    

    }
    for(int i=n;i<n;i--){
       number=10*number+a[i];
    }

    if(number%11==0)
       cout<<"OUI";
    else
       cout<<"NON";
    return 0;							
}

