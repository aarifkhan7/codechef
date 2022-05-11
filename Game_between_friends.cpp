#include<bits/stdc++.h>
using namespace std;

char winning(int a, int b){
    if(b > a){
        return 'S';
    }else{
        return 'N';
    }
}

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(winning(a, b) == 'N'){
        b += c;
    }else{
        a += c;
    }
    if(winning(a, b) == 'N'){
        b += d;
    }else{
        a += d;
    }
    cout << winning(a,b) << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}