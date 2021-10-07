
#include <iostream>

using namespace std;

int main()
{
   long long int n,j=0;
   
      cin>>n;
      while (n > 0)
{
    int digit = n%10;
    
    n /= 10;
    if(digit==4||digit==7){
            j++;

    }
   
}
      if(j==7||j==4){
               cout<<"YES";

      }
      else
        cout<<"NO";

return 0;
}