#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int pairof3 = n / 3;
    int costforpairof3 = 2 * x * pairof3;
    int remaining = n % 3;
    int costforremaining = x * remaining;
    cout << costforpairof3 + costforremaining << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}