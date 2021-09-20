#include <bits/stdc++.h>
using namespace std;

int main()
{

   int x;
   float bal;
   cin>>x;
   cin>>bal;
   if((x%10==5||x%10==0)&&x<bal)
       bal=bal-x-0.50;
       
      printf("%.2f",bal);
       
    return 0;
}
