#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int total = n;
    int dups = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1]){
            dups++;
        }
    }
    int uniq = n - dups;
    if(dups >= x){
        cout << uniq << endl;
    }else{
        x -= dups;
        uniq -= x;
        cout << uniq << endl;
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