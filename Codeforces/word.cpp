
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   int a;
   string s_output[100];
       cin>>a;
          string n;

 for(int i=0;i<a;i++){
    cin>>n;
 
   
    if(n.length()>10){
           int b=n.length()-2;
           s_output[i]+=n[0]+to_string(b)+n[n.length()-1];
        

    }
    else s_output[i]=n;

  
 }
 
 for(int i=0;i<a;i++){
     cout<<s_output[i]<<endl;
 }
 
   return 0;
   
}