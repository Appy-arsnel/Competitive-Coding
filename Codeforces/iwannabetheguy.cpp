#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q,p;
    
    cin>>n>>p;
    bool a[n];
        for(int i=0;i<n;i++)
         a[i]=0;

    int x[p];
    for(int i=0;i<p;i++){
         cin>>x[i];
        a[x[i]-1]=1;
    }


    cin>>q;

    int y[q];
    for(int i=0;i<q;i++){
            cin>>x[i];
        a[x[i]-1]=1;


    }
    int z=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            {
                z++;
            }

        }

   if(z==0)
    cout<<"I become the guy.";
        else
        cout<<"Oh, my keyboard!";


    return 0;
}