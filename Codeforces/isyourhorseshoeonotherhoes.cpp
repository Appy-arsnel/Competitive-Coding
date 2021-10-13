#include<iostream>
using namespace std;

int main(){

    int a[4],q=0;
    for(int i=0;i<4;i++)
    cin>>a[i];

    for(int b=0;b<4;b++){
       
          for(int j=b+1;j<4;j++){
          if(a[b]==a[j]&&a[j]!=-1){
              
                ++q;
              a[j]=-1;   
         
       
       }  
        }
       
     
    }
    
cout<<q;

    return 0;
}