#include<bits/stdc++.h>
using namespace std;

typedef map<int,vector<int>> miv;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    miv diffs;

    for(int i = 0; i < n-1; i++){
        int diff = arr[i+1] - arr[i];
        diffs[diff].push_back(arr[i]);
        diffs[diff].push_back(arr[i+1]);
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