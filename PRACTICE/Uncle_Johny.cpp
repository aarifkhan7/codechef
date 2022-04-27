#include<bits/stdc++.h>
using namespace std;

int arr[100];

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int k; cin >> k;
    int songlength[] = {arr[k-1]};
    sort(arr, arr+n);
    cout << search(arr, arr+n, songlength, songlength+1) - arr + 1 << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}