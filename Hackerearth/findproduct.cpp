

#include <iostream>
#include <math.h>


using namespace std;

int main() {
	int n,pdt=1;
    cin>>n;
   int m = 1000000007;
   while(n>0){
       int a;
       cin>>a;
       pdt=(pdt*a)%m;
       n--;
   }
	cout<<pdt;
}

