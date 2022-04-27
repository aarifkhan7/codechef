#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    if(float(n)/float(k) <= float(m)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
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