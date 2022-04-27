#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    vector<int> diffs;

    for(int i = 0; i < n-k+1; i++){
        // cout << "checking " << arr[i] << " and " << arr[i+k-1] << endl;
        diffs.push_back(arr[i+k-1] - arr[i]);
    }

    cout << *min_element(diffs.begin(), diffs.end()) << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}