#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> sums;

    int p1 = 0;
    int p2 = k;
    int st = 0;
    for(int i = 0; i < k; i++){
        st += arr[i];
    }
    sums.push_back(st);

    while(p2 < n){
        st += arr[p2];
        st -= arr[p1];
        p2++;
        p1++;
        sums.push_back(st);
    }

    cout << *max_element(sums.begin(), sums.end()) << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}