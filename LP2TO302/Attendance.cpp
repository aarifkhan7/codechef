#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<string,string>> students;
    map<string, int> count;
    for(int i = 0; i < n; i++){
        string fname, lname;
        cin >> fname >> lname;
        students.push_back(make_pair(fname, lname));
        if(count.find(fname) == count.end()){
            count.insert(make_pair(fname, 1));
        }else{
            count[fname]++;
        }
    }
    for(auto x : students){
        if(count[x.first] > 1){
            cout << x.first << ' ' << x.second << endl;
        }else{
            cout << x.first << endl;
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