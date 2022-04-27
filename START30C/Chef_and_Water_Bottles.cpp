#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, k;
    cin >> n >> x >> k;
    cout << min(k / x, n) << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}