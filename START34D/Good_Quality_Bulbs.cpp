#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    lli runningsum = 0;
    for(int i = 0; i < n-1; i++){
        int tmp; cin >> tmp;
        arr[i] = tmp;
        runningsum += tmp;
    }
    int ans = n*x - runningsum;
    if(ans < 0){
        ans = 0;
    }
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}