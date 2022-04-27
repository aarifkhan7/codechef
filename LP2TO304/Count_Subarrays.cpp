#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n; cin >> n;
    long long int arr[n];
    for(long long int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    long long int dp[n] = {1};

    for(long long int i = 1; i < n; i++){
        long long int numarrs = 1;
        if(arr[i-1] <= arr[i]){
            numarrs += dp[i-1];
        }
        dp[i] = numarrs;
    }

    long long int fsum = 0;
    for(long long int d : dp){
        fsum += d;
    }

    cout << fsum << endl;

}

int main()
{
    long long int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}