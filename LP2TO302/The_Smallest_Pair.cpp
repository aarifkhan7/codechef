#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[0] + arr[1] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}