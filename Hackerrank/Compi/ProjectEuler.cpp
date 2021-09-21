#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[100],j[30],fact_f;
int f_of(int n);

unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int s_of (int n1){

int sumofdigits=0;
 for(int i=n1; i>0;i=i/10){
           
           sumofdigits+=i;
     }

     
      return sumofdigits;
}

int g_of(int n2,int no){
  for(int w=0;w<no;w++){
      
     if(f_of(w)==fact_f){
         j[w]=f_of(w);
     }
     
  }
     int asize = sizeof(j) / sizeof(j[0]);
     sort(j, j + asize);
     int g_of_i=j[0];
     int total_sum=0;
     
     for(int i=0;i<n2;i++){
      total_sum+=s_of(g_of_i);
     }

     return total_sum;

 


}
int f_of(int n){
 int Id;
 int sumoffact=0;
     for(int i=n; i>0;i=i/10){
            Id = i%10;
           sumoffact+= factorial(Id);
     }
    
    return s_of(sumoffact);
    
}


int main() {

  long long int n;
  int m,test;

  cin>>test;

  int ans[20];


  for(int i=0;i<test;i++)
     
     {
         
      cin>>n>>m;
     fact_f=f_of(n);
     ans[i]=g_of(n,fact_f)%m;
     }
 for(int i=0;i<test;i++)
     {
      cout<<ans[i]<<endl;
     }
     
    return 0;
}
