#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    int countofa = 0;
    int countofb = 0;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == a){
            countofa++;
        }
        if(tmp == b){
            countofb++;
        }
    }
    cout << fixed;
    cout << setprecision(10);
    cout << double(countofa * countofb) / double(n * n) << '\n'; 
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}