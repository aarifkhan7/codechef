#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int a = x / 3;
    int b;
    if(x % 3 == 0){
        b = 0;
    }else{
        b = (a + 1) * 3 - x;
        a++;
    }
    if(a + b > n){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << a << ' ' << b << ' ' << (n - a - b) << endl;
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