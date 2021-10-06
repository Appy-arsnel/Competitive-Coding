#include<bits/stdc++.h>


using namespace std;

int main()
{
          string s;
          cin>>s;
          int lower=0,upper=0;
        
 for(int i=0;i<s.length();i++){

   
    if(s[i]>=65&&s[i]<=90){
           upper++;
    
    }
   if(s[i]>=97&&s[i]<=122){
        lower++;
    }

  
 }
if(lower>=upper){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
}else{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s;
}

 
   return 0;
   
}