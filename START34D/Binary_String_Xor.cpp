#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int o = 0;
    int z = 0;
    for(int i = 0; i < n; i++){
        char tmp; cin >> tmp;
        if(tmp == '1'){
            o++;
        }else{
            z++;
        }
    }
    bool evendiv = false;
    bool odddiv = false;
    if(o % 2 == 0){
        if(o >= 2*k){
            evendiv = true;
        }else if(n >= 2*(k-o)){
            odddiv = true;
        }
    }
    if(o % 2 == 1){
        if(k % 2 == 0){
            if(!odddiv)
                odddiv = false;
        }else{
            o--; k--;
            if(o % 2 == 0 && n >= 2*k){
                odddiv = true;
            }
        }
    }
    if(evendiv || odddiv){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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