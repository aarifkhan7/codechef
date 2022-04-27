#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Input the array
    int n, q;
    cin >> n >> q;
    int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    // Store gcds
    int gcdfront[n+1], gcdback[n+1];
    gcdfront[0] = 0;
    gcdback[n] = arr[n];
    // Calculate gcd from front
    for(int i = 1; i <= n; i++){
        gcdfront[i] = __gcd(arr[i], gcdfront[i-1]);
    }
    // Calculate back gcds
    for(int i = n-1; i >= 0; i--){
        gcdback[i] = __gcd(arr[i], gcdback[i+1]);
    }
    // Queries
    while(q--){
        int l, r; cin >> l >> r;
        int gcd = __gcd(gcdfront[l-1], gcdback[r+1]);
        if(gcd == 0){
            cout << 1 << '\n';
        }else{
            cout << gcd << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}