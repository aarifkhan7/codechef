#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    int sum = a + b;
    int m = 0;
    int map[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while(sum > 0){
        int dig = sum % 10;
        sum /= 10;
        m += map[dig];
    }
    cout << m << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}