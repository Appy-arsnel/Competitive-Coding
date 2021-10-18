#include <bits/stdc++.h>

using namespace std;
int n,W;

int dynamic_0_1_knapsack(int n,int W,int w[],int v[]);
int main()
{
cout<<"A023116119009\n Apoorv Joshi";


cout<<"Enter the no of items and Total weight respectively\n";
cin>>n>>W;
int w[n],v[n];
cout<<"Enter the weight and value\n";

for(int i=0;i<n;i++){

    cout<<"Enter the weight and value of item"<<i+1<<":\t";
    cin>>w[i]>>v[i];
}



dynamic_0_1_knapsack(n,W,w,v);

return 0;
 
}

int dynamic_0_1_knapsack(int n,int W,int w[],int v[]){
    
    int C[n+1][W+1];
    
   for(int i=0;i<=W;i++){
       C[0][i]=0; 
   }
   
   
   for(int i=0;i<=n;i++){
       C[i][0]=0; 
   }
  
   
    for(int i=1;i<=n;i++)
   for(int j=1;i<=W;j++){
       if(w[i]<=j){
           if(v[i]+C[i-1][j-w[i]]>C[i-1][j]){
               C[i][j]=v[i]+C[i-1][j-w[i]];
           }
           else
           {
               C[i][j]=C[i-1][j]; 
           }
       }
       else
         {
              C[i][j]=C[i-1][j];
         }
       
   }

   cout<<"The 0-1 knapsack matrix:\n";
     for(int i=0;i<=n;i++){
         for(int j=0;i<=W;i++){
             
            cout<<C[i][j]<<"\t";
         }   
         cout<<"\n";
     }

    
    
   cout<<"Maximum Profit:\t"<<C[n][W];
    
 return 0;   
}