#include<bits/stdc++.h>
using namespace std;

int numofnines(int n){
    int count = 0;
    while(n > 0){
        int d = n % 10;
        if(d == 9){
            count++;
        }else{
            return count;
        }
        n /= 10;
    }
    return count;
}

void solve(){
    int n; cin >> n;
    int s = numofnines(n);
    if(s % 2 == 0){
        cout << n + 1 << endl;
    }else{
        cout << n + 2 << endl;
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