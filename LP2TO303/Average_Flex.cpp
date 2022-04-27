#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int count[101] = {0};
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        count[tmp]++;
    }
    int fsum = 0;
    int boast = 0;
    for(int i = 0; i <= 100; i++){
        fsum += count[i];
        if(fsum > n - fsum){
            boast += count[i];
        }
    }
    cout << boast << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}