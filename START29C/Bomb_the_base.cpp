#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool print = true;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] < x){
            cout << i + 1 << endl;
            print = false;
            break;
        }
    }
    if(print){
        cout << 0 << endl;
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