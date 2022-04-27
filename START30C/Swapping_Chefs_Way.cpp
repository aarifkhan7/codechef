#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int c = n/2;
    for(int i = 0; i < c; i++){
        if(s[i] > s[n - i - 1]){
            char tmp1 = s[i];
            char tmp2 = s[n - i - 1];
            s[i] = tmp2;
            s[n-i-1] = tmp1;
        }
    }
    bool print = true;
    for(int i = 0; i < n-1; i++){
        if(s[i+1] < s[i]){
            cout << "NO" << endl;
            print = false;
            break;
        }
    }
    if(print){
        cout << "YES\n";
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