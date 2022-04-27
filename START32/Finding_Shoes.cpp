#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    if(n <= m){
        cout << n << endl;
    }else if(n > m){
        cout << m + (n-m) * 2 << endl;
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