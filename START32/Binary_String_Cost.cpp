#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    bool z = false, o = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            o = true;
        }else{
            z = true;
        }
        if(o && z){
            break;
        }
    }
    if(o && z){
        cout << min(x, y) << endl;
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