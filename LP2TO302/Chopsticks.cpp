#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, d; cin >> n >> d;
    int l[n];
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    sort(l, l+n);
    int pairs = 0;
    int nonpairs = 0;
    for(int i = 0; i < n-1; i++){
        if(l[i+1] - l[i] <= d){
            pairs++;
            i++;
        }else{
            nonpairs++;
        }
    }
    cout << pairs << endl;
}

int main()
{
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}