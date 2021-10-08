#include<bits/stdc++.h>

using namespace std;


int main()
{
 int a,b,y=1;
 cin>>a>>b;

if(a==b){
   cout<<y;
}
 if(a<b){
     for(;;){
         a*=3;
         b*=2;
       
          if(a>b){
             cout<<y;
             break;
         }
         y++;
     }
 }
return 0;
}