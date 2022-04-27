#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, p, q;
    cin >> a >> b >> p >> q;
    if(p % a != 0 || q % b != 0){
        cout << "NO" << endl;
    }else{
        int d1 = p / a;
        int d2 = q / b;
        if(d1 == d2 || d1 - d2 == 1 || d2 - d1 == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
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