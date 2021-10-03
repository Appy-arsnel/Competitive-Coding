#include <iostream>
#include<cstring>
using namespace std; 
int main(){


    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]>='a'&&s[i<='z'])
        s[i]=s[i]-32;
         if(s[i]>='A'&&s[i<='Z'])
        s[i]=s[i]+32;
    }
    return 0;
}
