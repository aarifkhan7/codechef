#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, k; cin >> n >> x >> k;
    if(n * x <= k){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}