#include<bits/stdc++.h>
using namespace std ;
int fib(int maxFib){
    if(maxFib <2){
     return 1;
    }
    return fib(maxFib-2) + fib(maxFib-1);
};
int main(){
    long long ans = 0ll , temp;
    for(int i = 1 ; i <= 32 ; i++){
        temp = fib(i);
        if(temp%2 == 0){
            ans += temp;
        }
    }
    cout<<ans; //4613732s
}
