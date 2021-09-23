

#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
   	cin >>word;
   	char z='z';
   	char o ='o';
   	int x;
   	x=count(word.begin(), word.end(), 'z');
   	int y;
   	y=count(word.begin(), word.end(), 'o');
   
   	if(y==2*x)
   	 cout<<"Yes";
   	else
   	 cout<<"No";
	
	


	return 0;
}

 
