#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    int c = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            c++;
    }
    if(c == 2){
        return true;
    }else{
        return false;
    }
}

void solve(){
    
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}