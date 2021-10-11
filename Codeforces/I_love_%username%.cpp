#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],worst,best,cool=0;

    for(int i=0;i<n;i++)
    cin>>a[i];

    worst=a[0];
    best=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>best){
            best=a[i];
            cool++;

    }
    if(a[i]<worst){
         worst=a[i];
            cool++;

    }
    }
    


    cout<<cool;





    return 0;

}