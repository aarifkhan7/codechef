#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b; cin >> n >> a >> b;
    if(abs(a-b) == 1){
        int prob = 0;
        if((max(a,b) + 1) <= n){
            prob++;
        }
        if((min(a,b) - 1) >= 1){
            prob++;
        }
        cout << prob << endl;
    }else{
        cout << 0 << endl;
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