
#include <iostream>
using namespace std;
void weight(int n){

    if(n%2==0&&n!=2)
        cout<<"YES";
    else
      cout<<"NO";
} 
int main()
{
  int n;
  cin>>n;
   
   weight(n);
   return 0;
   
}


