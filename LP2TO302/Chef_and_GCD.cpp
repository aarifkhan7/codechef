#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y;
    cin >> x >> y;
        if(__gcd(x,y) > 1){
            cout << 0 << endl;
        }else{
            if((x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0)){
                cout << 1 << endl;
            }else{
                if(__gcd(x, y+1) > 1 || __gcd(x+1, y) > 1){
                    cout << 1 << endl;
                }else{
                    cout << 2 << endl;
                }
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