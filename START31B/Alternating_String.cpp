#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int z = 0, o = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            z++;
        }else{
            o++;
        }
    }
    if(z == o){
        cout << z + o << endl;
    }else if(z > o){
        cout << 2*o + 1 << endl;
    }else{
        cout << 2*z + 1 << endl;
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