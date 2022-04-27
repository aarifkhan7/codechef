#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int size = n;
    int time = 0;
    int freq[26] = {0};
    
    for(int i = 0; i < size; i++){
        if(s[i] == s[i+1]){
            time++;
            i++;
        }else{
            time++;
        }
    }

    cout << time << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}