#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n % 4 == 0){
        cout << n/4 << endl;
    }else{
        cout << n/4 + 1 << endl;
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