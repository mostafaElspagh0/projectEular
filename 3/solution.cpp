#include<bits/stdc++.h>
using namespace std ;
//600851475143
 
int main(){
   long long int n=600851475143, div=2;
   while(true){
       while(n%div ==0)
            n /= div;    
   
        if(n == 1){
                printf("%lld",div);
                break;
        }else
            div++;
   }
}
