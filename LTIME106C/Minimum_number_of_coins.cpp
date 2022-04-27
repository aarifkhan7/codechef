#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n % 5 != 0){
        cout << -1 << endl;
    }else{
        if(n % 10 == 0){
            cout << n / 10 << endl;
        }else{
            cout << n / 10 + 1 << endl;
        }
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