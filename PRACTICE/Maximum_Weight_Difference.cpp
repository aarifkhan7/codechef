#include<bits/stdc++.h>
using namespace std;

int arr[100];

void solve(){
    int n, k; cin >> n >> k;
    int total_sum = 0;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        total_sum += tmp;
        arr[i] = tmp;
    }
    sort(arr, arr+n);
    int forwardk = 0;
    int backwardk = 0;
    for(int i = 0; i < k; i++){
        forwardk += arr[i];
    }
    for(int i = n-1; i > n-k-1; i--){
        backwardk += arr[i];
    }

    cout << max(abs(forwardk - (total_sum - forwardk)),abs(backwardk - (total_sum - backwardk))) << '\n';

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}