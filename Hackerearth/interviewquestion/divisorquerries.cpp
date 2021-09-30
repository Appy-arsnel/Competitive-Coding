
#include <bits/stdc++.h>

using namespace std;
int querry(int l,int r,int a[]){
   
   int n=1;
   for(int j=l-1;j<r;j++)
      n=n*a[j];
   
     bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < n; p++)
        if (hash[p] == true)
            for (int i = p * 2; i < n; i += p)
                hash[i] = false;
  
    int total = 1;
    for (int p = 2; p <= n; p++) {
        if (hash[p]) {
  
           
            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
  

   cout<<total;
    return total;
}

int main() {
	int n,q,l,r,s=0,d;
	cin >> n>>q;
	d=q;
    int a[n],ans[q];
    for(int i=0;i<n;i++)
          cin>>a[i];
    while(q>0){
         

        cin>>l>>r;
         ans[s]=querry(l,r,a);
         s++;
        q--;
    }
   for(int j=0;j<d;j++)
   cout<<ans[j]<<endl;

    
    
}





