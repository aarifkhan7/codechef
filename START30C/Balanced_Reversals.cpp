#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ones = 0, zeros = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0')
            zeros++;
        else
            ones++;
    }
    for(int i = 0; i < zeros; i++){
        cout << '0';
    }
    for(int i = 0; i < ones; i++){
        cout << '1';
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