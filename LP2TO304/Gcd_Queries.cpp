#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    int a[n+1];
    a[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    while(q--){
        int l, r; cin >> l >> r;
        vector<int> nums;
        int gcd = 0;
        for(int i = 1; i <= n; i++){
            if(i < l || i > r){
                gcd = __gcd(gcd, a[i]);
                if(gcd == 1){
                    break;
                }
            }
        }
        cout << gcd << endl;
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