#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n % 2 == 1){
        cout << 1 << ' ';
        for(int i = 2; i < n; i++){
            if(i % 2 == 0){
                cout << i + 1 << ' ';
            }else{
                cout << i - 1 << ' ';
            }
        }
        cout << n - 1;
    }else{
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                cout << i - 1 << ' ';
            }else{
                cout << i + 1 << ' ';
            }
        }
    }
    cout << endl;
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