#include<bits/stdc++.h>
using namespace std;

int main(){  
    int n = 10;
    long long ans = 1;
    for(int i = 1 ; i<=n ; i++)
        ans *= i/__gcd(ans,(long long )i);    
    cout<<ans;
}
//232792560