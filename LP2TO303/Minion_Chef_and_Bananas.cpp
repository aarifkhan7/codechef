#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, h; cin >> n >> h;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    if(n == h){
        cout << arr[n-1] << endl;
    }else{
        int extra = h - n;
        for(int i = arr[n-1]; i > 0; i--){
            int t = 0;
            for(int j = n-1; arr[j] > arr[i]; j--){

            }
        }
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