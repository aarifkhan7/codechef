#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int zero = 0;
    int ones = 0;
    bool adj = false;
    for(int i = 0; i < n-1; i++){
        if(s[i] == '0')
            zero++;
        else
            ones++;
        if(adj == false && s[i] == '1' && s[i+1] == '1'){
            adj = true;
        }
    }
    if(s[n-1] == '1'){
        ones++;
    }else{
        zero++;
    }

    if(n == 1){
        if(s == "0"){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
    }else if(zero == n){
        cout << 0 << endl;
    }else if(adj == false){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
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