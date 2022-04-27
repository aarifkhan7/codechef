#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

void solve(){
    lli n, k; cin >> n >> k;
    lli a[n];
    for(lli i = 0; i < n; i++)
        cin >> a[i];
    
    vector<lli> mins;
    while(k--){
        lli * min_e = min_element(a, a+n);
        lli left = 0, right = 0;
        if(min_e > a){
            left = *(min_e - 1);
        }
        if(min_e < a + n - 1){
            right = *(min_e + 1);
        }
        // cout << *min_e << ":" << left << ":" << right << endl;
        mins.push_back(*min_e);
        *min_e = max(left, right);
    }
    mins.push_back(*min_element(a, a+n)); 
    cout << endl;
}

int main()
{
    lli t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}