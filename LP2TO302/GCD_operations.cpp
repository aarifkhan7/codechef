#include<bits/stdc++.h>
using namespace std;

int a[10001] = {0};
int b[10001] = {0};

int finda(int val, int n){
    for(int i = 1; i <= n; i++){
        if(a[i] == val){
            return i;
        }
    }
    return -1;
}

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
        cin >> b[i];
    }
    
    for(int i = 1; i <= n; i++){
        if(a[i] != b[i]){
            int final = b[i];
            int ind1 = finda(final, n);
            int ind2 = finda(2 * final, n);
            if(ind1 != -1 && ind2 != -1){
                a[ind1] = final;
                a[ind2] = final;
            }
        }
    }
    
    bool print = true;
    for(int i = 1; i <= n; i++){
        if(a[i] != b[i]){
            cout << "NO\n";
            print = false;
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