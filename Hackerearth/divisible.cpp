

#include <stdio.h>
#include <math.h>


using namespace std;

int main() {
    int n,i;
   scanf("%d",&n);
        int a[n];
    

    for(i=0;i<n;i++){
        if(i<n/2){
               scanf("%d",&a[i]);
        }
        else{
               scanf("%d",&a[i]);

        }
       
    }
        int number=0;
        int digits;

    for(i=0;i<n;i++){
          if(i<n/2){
          digits = (int)log10(a[i]);
       a[i] = (int)(a[i]/ pow(10, digits));
          }
          else{
           a[i]=a[i]%10;

          }
    

    }
    for(int i=n-1;i>=0;i--){
  

       number=10*number+a[i];
    }

    if(number!=0&&number%11==0)
       printf("OUI");
    else
       printf("NON");
    return 0;							
}

