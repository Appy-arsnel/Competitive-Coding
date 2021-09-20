

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;	
     int N[n];
     for(int i=0;i<n;i++){
         cin>>N[i];
     }
	if(N[n-1]%10==0){
        cout<<"Yes";
    }
    else
    cout<<"No";

    return 0;							
}

