#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int n = stoi(s);
    int countodd = 0;
    int counteven = 0;
    for(int i = 0; i < s.size(); i++){
        if((int(s[i]) - int('0')) % 2 == 0){
            counteven++;
        }else{
            countodd++;
        }
    }
    if(n % 2 == 0){
        if(counteven > 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }else{
        if(countodd > 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
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