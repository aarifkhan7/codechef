#include<bits/stdc++.h>
using namespace std;

void solve(){
    int days; cin >> days;
    int compweeks = days / 7;
    int leftdays = days % 7;
    
    int leaves = compweeks;
    if(leftdays >= 6){
        leaves++;
    }

    cout << leaves << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}