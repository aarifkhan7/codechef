#include<bits/stdc++.h>
using namespace std;

void solve(){
    string h, g;
    cin >> h >> g;
    for(int i = 0; i < 5; i++){
        if(h[i] == g[i]){
            cout << 'G';
        }else{
            cout << 'B';
        }
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}