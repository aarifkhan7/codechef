#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, s; cin >> s;
    x = round(s/2);
    y = s-x;
    while(x == 0 || y == 0){
        x++;
        y--;
    }
    cout << x * y << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}