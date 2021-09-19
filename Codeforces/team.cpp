
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   int n;
   int answered =0;
   
   int ans1,ans2,ans3;
   cin>>n;


 for(int i=0;i<n;i++){
 
        cin>>ans1;
         cin>>ans2;

        cin>>ans3;
    
    if(ans3==1&&ans1==1||ans3==1&&ans2==1||ans2==1&&ans1==1)
        answered++;
    
   
 
   
 }
 cout<<answered;
   return 0;
   
}