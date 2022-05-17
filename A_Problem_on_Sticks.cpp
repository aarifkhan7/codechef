#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> lens;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        lens.insert(tmp);
    }
    if(lens.find(0) == lens.end()){
        cout << lens.size() << '\n';
    }else{
        cout << lens.size() - 1 << '\n';
    }
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
	return 0;
}