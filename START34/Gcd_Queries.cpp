#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    while(q--){
        int x, y; cin >> x >> y;
        x--;
        y--;
        int gcd = 0;
        for(int i = 0; i < x; i++){
            gcd = __gcd(gcd, arr[i]);
        }
        for(int j = y + 1; j < n; j++){
            gcd = __gcd(gcd, arr[j]);
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