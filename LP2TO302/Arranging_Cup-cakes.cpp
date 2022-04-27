#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> factors;
    vector<int> diffs;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n / i == i){
                factors.push_back(i);
                diffs.push_back(0);
            }else{
                diffs.push_back(abs(i - n/i));
            }
        }
    }
    sort(diffs.begin(), diffs.end());
    cout << diffs[0] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}