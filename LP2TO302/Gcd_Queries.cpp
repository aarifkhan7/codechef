#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<set<int>> divisors;

    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        set<int> facts;
        for(int z = 1; z <= sqrt(tmp); z++){
            if(tmp % z == 0){
                if(z == tmp / z){
                    facts.insert(z);
                }else{
                    facts.insert(z);
                    facts.insert(tmp/z);
                }
            }
        }
        divisors.push_back(facts);
    }

    while(q--){
        int l, r; cin >> l >> r; l--; r--;
        for(int i = 0; i < n-1; i++){
            if(i < l || i > r){
                
            }
        }
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