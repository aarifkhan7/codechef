#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli lcm(lli a, lli b){
    return (a * b) / __gcd(a, b);
}

void solve(){
    lli n, a, b, k; cin >> n >> a >> b >> k;
    lli divbya = n / a;
    lli divbyb = n / b;
    lli l = lcm(a, b);
    lli divbyboth = n / l;
    lli total = divbya + divbyb - 2 * divbyboth;
    if(total >= k){
        cout << "Win" << endl;
    }else{
        cout << "Lose" << endl;
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