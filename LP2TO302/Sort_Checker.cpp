#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    bool printed = false;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << "no" << endl;
            printed = true;
            break;
        }
    }
    if(!printed){
        cout << "yes" << endl;
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