#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);

    int mex = n;
    int mexindex = n;

    for(int i = 0; i < n; i++){
        if(arr[i] != i){
            mex = i;
            mexindex = i;
            break;
        }
    }

    if(mex == n){
        if(k != 0)
            cout << mex + k << endl;
        else
            cout << mex << endl;
    }else{
        
    }

    // cout << mex << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}