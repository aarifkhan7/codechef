#include<bits/stdc++.h>
using namespace std;

void solve(){
    int d; cin >> d;
    string s; cin >> s;
    bool print = true;
    for(int i = 0; i < d; i++){
        if(s[i] == '0' || s[i] == '5'){
            cout << "Yes" << endl;
            print = false;
            break;
        }
    }
    if(print){
        cout << "No" << endl;
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