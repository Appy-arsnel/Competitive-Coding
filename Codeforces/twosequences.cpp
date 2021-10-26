#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int n;
    string s,a,b=" ",c;
    cin>>n;
    int k=0;
    string ans[n];
    while(n>0){
        cin>>s;
       a=s[0];
       for(int i=1;i<n;i++)
       c+=s[i];
              ans[k]=a+b+c;

       k++;
        n--;
    }
    
    for(int i=1;i<n;i++)
    cout<<ans[i];
    return 0;

}