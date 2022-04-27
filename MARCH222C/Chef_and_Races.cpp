#include<bits/stdc++.h>
using namespace std;

void solve(){
    set<int> races;
    int i = 4;
    while(i--){
        int tmp; cin >> tmp;
        races.insert(tmp);
    }
    if(races.size() == 4){
        cout << 2 << endl;
    }else if(races.size() == 3){
        cout << 1 << endl;
    }else if(races.size() == 2){
        cout << 0 << endl;
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