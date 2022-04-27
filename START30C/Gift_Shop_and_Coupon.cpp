#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int gifts = 0;
    int lastbuyindex = -1;
    for(int i = 0; i < n && k > 0; i++){
        if(k >= arr[i]){
            k -= arr[i];
            gifts++;
            lastbuyindex = i;
        }else{
            break;
        }
    }

    if(gifts == n){

    }else{
        if(round(arr[lastbuyindex+1] / 2.0) <= k){
            gifts++;
            k -= round(arr[lastbuyindex+1] / 2.0);
        }else{
            if(gifts != 0){
                int lastcost = arr[lastbuyindex];
                if(arr[lastbuyindex+1] <= k + (lastcost - round(lastcost/2.0))){
                    gifts++;
                }
            }
        }
    }
    cout << gifts << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}