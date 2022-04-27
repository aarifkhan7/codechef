#include<bits/stdc++.h>
using namespace std;

struct dimen{
    int len; int bred;
};

int solve(){
    int n, m, c; cin >> n >> m >> c;
    set<dimen> dimensions;
    int maxarea = n * m;
    if(maxarea < c){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1; i <= maxarea; i++){
        int area = i;
        for(int z = 1; z <= sqrt(area); z++){
            if(area % z == 0){
                dimen tmp = {area / z, z};
                dimensions.insert(tmp);
            }
        }
    }
    cout << dimensions.size() << endl;
    return 0;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}