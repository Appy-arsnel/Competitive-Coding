

#include <iostream>
#include <cstring>


using namespace std;

int main() {
	string s,rev;
	cin >> s;
	rev=string(s.rbegin(),s.rend());
    if(rev==s)
    cout<<"YES";		
   	else
   	 cout<<"NO";
	
}

