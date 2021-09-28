

#include <iostream>

using namespace std;

int main() {
	int n,temp=0;
	cin>>n;
    char word[n];
   	for(int i=0;i<n;i++)
	   {
		   cin>>word[i];
		   
	    }

			for(int i=0;i<n;i++)
	   {
		   if(word[i]=='H'&&word[i+1]=='H'){
              temp++;
			  break;
		   }

			if(word[i]=='.'){
				word[i]='B';

			}
	    }


   	
   	if(temp==0){

        	 cout<<"YES\n";
			 for(int i=0;i<n;i++){
				 cout<<word[i];
			 }

	   }
   	else
   	 cout<<"NO";
	
	


	return 0;
}

 
