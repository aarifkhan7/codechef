#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int currsize = d;
    int boxes = 1;
    if(a <= currsize){
        currsize -= a;
    }
    if(b <= currsize){
        currsize -= b;
    }else{
        currsize = d - b;
        boxes++;
    }
    if(c <= currsize){
        currsize -= c;
    }else{
        currsize = d - c;
        boxes++;
    }
    cout << boxes << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}