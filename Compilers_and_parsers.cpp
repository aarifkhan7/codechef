#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int len = s.length();

    stack<char> bracs;

    int max = 0;

    int temp = 0;
    for(int i = 0; i < len; i++){
        char c = s[i];
        if(c == '<'){
            bracs.push('<');
        }else{
            if(!bracs.empty()){
                bracs.pop();
                temp += 2;
            }else{
                if(temp > max){
                    max = temp;
                }
                temp = 0;
            }
        }
        if(temp > max){
            max = temp;
        }
    }

    cout << max << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}