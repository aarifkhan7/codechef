#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int equals = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1]){
            equals++;
        }
    }
    cout << equals << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}