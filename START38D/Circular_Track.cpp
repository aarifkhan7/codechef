#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, m; cin >> a >> b >> m;
    cout << min(abs(b-a), m-abs(b-a)) << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}