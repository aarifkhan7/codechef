#include<bits/stdc++.h>
using namespace std;

void solve(){
    string tmp; cin >> tmp;
    int n = tmp.size();
    string s = '0' + tmp + '0';
    // cout << s << '\n';
    int switches = 0;
    for(int i = 0; i < n+1; i++){
        if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')){
            switches++;
        }
    }
    cout << switches/2 << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}