#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, x; cin >> n >> m >> x;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    // Input and sort done
    int firstindex = n;
    for(int i = 0; i < n; i++){
        if(arr[i] >= m){
            firstindex = i;
            break;
        }
    }
    int firstround = (n - (firstindex + 1)) + 1;
    if(firstround < x){
        int k = x;
        int required = x - firstround;
        cout << k << ' ';
        for(int i = firstindex - required; i < firstindex; i++){
            cout << i+1 << ' ';
        }
        for(int i = firstindex; i < n; i++){
            cout << i+1 << ' ';
        }
        cout << endl;
    }else{
        int k = firstround;
        cout << k << ' ';
        for(int i = firstindex; i < n; i++){
            cout << i+1 << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}