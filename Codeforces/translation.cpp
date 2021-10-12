#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.length(),count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[n-1-i]){
         count++;
        }
    }
    if(count==0)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}