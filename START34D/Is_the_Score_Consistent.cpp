#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    if((c-a) >= 0 && (d-b) >= 0){
        cout << "POSSIBLE\n";
    }else{
        cout << "IMPOSSIBLE\n";
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