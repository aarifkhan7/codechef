#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    int mex = n;
    for(int i = 0; i < n; i++){
        // cout << "checking " << arr[i] << endl;
        if(arr[i] != i){
            mex = i;
            break;
        }
    }


    int *lbound, *ubound;
    lbound = lower_bound(arr, arr+n, mex);
    ubound = upper_bound(arr, arr+n, mex + k - 1);
    int count;
    if(lbound == ubound){
        count = 1;
    }else{
        count = ubound - lbound + 1;
    }

    if(k == 0){
        cout << mex << endl;
    }else{
        cout << "elements in between " << mex << " and " << mex + k - 1 << " = " << count;
        cout << mex + k + count - 1 << endl;
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