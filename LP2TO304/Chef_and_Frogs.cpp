#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p; cin >> n >> k >> p;
    int oarr[n];
    int sarr[n];
    for(int i = 0; i < n; i++){
        cin >> oarr[i];
        cin >> sarr[i];
    }
    sort(sarr, sarr+n);
    
    while(p--){
        int a, b; cin >> a >> b;
        a--; b--;
        int loc_a = oarr[a];
        int loc_b = oarr[b];
        bool dp[n] = {false};
        for(int i = 0; i < n; i++){
            if(sarr[i] < loc_a){
                dp[i] = false;
            }else if(sarr[i] == loc_a){
                dp[i] = true;
            }else if(sarr[i] - sarr[i-1] <= k){
                dp[i] = true;
            }
        }
        if(dp[b]){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}