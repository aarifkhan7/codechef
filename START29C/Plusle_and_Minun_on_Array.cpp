#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> pos;
    vector<int> neg;

    int possum = 0;
    int negsum = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            int tmp; cin >> tmp;
            pos.push_back(abs(tmp));
            possum += abs(tmp);
        }else{
            int tmp; cin >> tmp;
            neg.push_back(abs(tmp));
            negsum += abs(tmp);
        }
    }

    int negmax = *max_element(neg.begin(), neg.end());
    int posmin = *min_element(pos.begin(), pos.end());

    int oldval = possum - negsum;
    int newval = possum - negsum + 2 * negmax - 2 * posmin;
    cout << max(oldval, newval) << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}