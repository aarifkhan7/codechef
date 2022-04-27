#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int gcd = __gcd(n, k);
    cout << n / gcd << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}