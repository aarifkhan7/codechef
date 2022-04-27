#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int negs = 0, pos = 0, count = 0;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp < 0){
            negs++;
        }else if(tmp > 0){
            pos++;
        }
    }
    count += (negs*(negs-1))/2;
    count += (pos*(pos-1))/2;
    cout << count << '\n';

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}