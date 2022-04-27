#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[n];
    }
    sort(arr, arr+n);
    int mex = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == i){
            mex++;
        }else{
            break;
        }
    }
    if(k == 0){
        cout << mex << endl;
    }else{
        int i = 0;
        int count = 0;
        while(arr[i] >= mex){
            if(arr[i] <= k + mex){
                count++;
            }
            i++;
        }
        cout << mex + k + count << endl;
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