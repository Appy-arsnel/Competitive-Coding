

#include <iostream>



using namespace std;

int main() {
	int L,N;
	cin >>L>>N;
    int W[N],H[N];
  
        for(int i=0;i<N;i++)
          cin>>W[i]>>H[i];

     
   for(int i=0;i<N;i++){
       if(H[i]<L||W[i]<L)
    cout<<"UPLOAD ANOTHER\n";

    else{
    if(W[i]*W[i]==W[i]*H[i])
    cout<<"ACCEPTED\n";
    else
     cout<<"CROP IT\n";
       
   }
    }
  
    
  
       return 0;


    
	
}

