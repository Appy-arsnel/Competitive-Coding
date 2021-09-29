

#include <iostream>

using namespace std;

int main() {
	int temp=0;
  
    char word[9];
   	for(int i=0;i<9;i++)
	  {
		   cin>>word[i];
		   
	   }
       int sum12,sum56,sum45,sum89;
       sum12=word[1]+word[0]-96;
              sum56=word[4]+word[5]-96;

       sum45=word[3]+word[4]-96;
       
       sum89=word[7]+word[8]-96;

     if(sum12%2==0&&sum56%2==0&&sum45%2==0&&sum89%2==0&&word[2]!='A'
     &&word[2]!='E'&&word[2]!='I'&&word[2]!='O'&&word[2]!='U'&&word[2]!='Y'){
         temp++;
     }

	
	 if(temp==0)
       printf("invalid");
    else
       printf("valid");


	return 0;
}

 
