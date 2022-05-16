#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, h, count = 0; cin >> n >> h;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp > h)
            count++;
    }
    cout << count << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}