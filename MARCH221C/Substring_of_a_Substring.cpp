#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int len = s.length();
    string pre;
    string suf;

    for(int i = 1; i < len; i++){
        string tmp = s.substr(0, i);
        if(s.find(tmp, 1) == string::npos){
            cout << tmp << " is not present in " << s << endl;
            pre = tmp;
            break;
        }
    }

    for(int i = 2; i <= len; i++){
        suf[i-2] = s.substr(i-1, len - i + 1);
    }



}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}