#include<bits/stdc++.h>
using namespace std;

void solve(){
    double u, v, a, s, vdash;
    cin >> u >> v >> a >> s;
    
    if(u <= v){
        cout << "Yes" << endl;
    }else{
        vdash = u*u - 2*a*s;
        if(vdash <= v*v){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
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