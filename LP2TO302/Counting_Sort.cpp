#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int count[101] = {0};
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        count[tmp]++;
    }
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < count[i]; j++){
            cout << i << ' ';
        }
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}