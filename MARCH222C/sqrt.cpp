#include<bits/stdc++.h>
using namespace std;

pair<int,int> qsolve(int sum, int product){
    if(sum * sum - 4 * product >= 0){
        int d = sum * sum - 4 * product;
        if(sqrt(d) * sqrt(d) == d){
            int x = (sum + sqrt(d))/2;
            int y = (sum - sqrt(d))/2;
            if(x >= 1 && y >= 1){
                return make_pair(y,x);
            }else{
                return make_pair(-1,-1);
            }
        }else{
            return make_pair(-1,-1);
        }
    }else{
        return make_pair(-1,-1);
    }
}

void solve(){
    int s, p; cin >> s >> p;
    cout << qsolve(s,p).first << " " << qsolve(s,p).second << "\n";
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}