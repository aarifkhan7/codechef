#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    set<int> full, a, b;

    for(int i = 1; i <= n; i++){
        full.insert(i);
    }
    for(int i = 0; i < m; i++){
        int tmp; cin >> tmp;
        a.insert(tmp);
    }
    for(int i = 0; i < k; i++){
        int tmp; cin >> tmp;
        b.insert(tmp);
    }
    vector<int> v(m + k, 0);
    vector<int>::iterator it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), v.begin());
    v.resize(it - v.begin());

    vector<int> minusa(n - m, 0);
    it = set_difference(full.begin(), full.end(), a.begin(), a.end(), minusa.begin());
    
    vector<int> minusb(n - k, 0);
    it = set_difference(full.begin(), full.end(), b.begin(), b.end(), minusb.begin());

    vector<int> v1(2*n - m - k, 0);
    it = set_intersection(minusa.begin(), minusa.end(), minusb.begin(), minusb.end(), v1.begin());
    v1.resize(it - v1.begin());

    cout << v.size() << ' ' << v1.size() << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}