#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    map<string,int> probs;
    vector<string> types = {"cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard"};
    for(auto t : types){
        probs[t] = 0;
    }
    for(int i = 0; i < n; i++){
        string tmp; cin >> tmp;
            probs[tmp] = 1;
    }
    if(probs["cakewalk"] && probs["simple"] && probs["easy"] && (probs["easy-medium"] || probs["medium"]) && (probs["medium-hard"] || probs["hard"])){
        cout << "Yes\n";
    }else{
        // cout << probs["cakewalk"] << '\n';
        // cout << probs["simple"] << '\n';
        // cout << probs["easy"] << '\n';
        // cout << probs["easy-medium"] << '\n';
        // cout << probs["medium"] << '\n';
        // cout << probs["medium-hard"] << '\n';
        // cout << probs["hard"] << '\n';
        cout << "No\n";
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