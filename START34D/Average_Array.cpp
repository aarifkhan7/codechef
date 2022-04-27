#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    if(n % 2 == 1){
        cout << x << ' ';
        for(int i = 1; i <= n/2; i++){
            cout << x - i << ' ' << x + i << ' ';
        }
        cout << '\n';
    }else{
        for(int i = 1; i <= n/2; i++){
            cout << x - i << ' ' << x + i << ' ';
        }
        cout << '\n';
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