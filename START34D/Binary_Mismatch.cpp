#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int o = 0, z = 0;
} info;

void solve(){
    int n; cin >> n; string s; cin >> s;
    int total_o = 0, total_z = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '0')
            total_z++;
        else
            total_o++;
    }

    bool print = true;

    if(total_o == total_z){
        cout << "YES\n" << 1 << ' ' << n << '\n';
        print = false;
    }else{

    info data[n+1][n+1];
    for(int i = 1; i <= n; i++){
        if(!print){
            break;
        }
        for(int j = i; j >= 1; j--){
            if(s[i-1] == '0'){
                data[j][i].z = data[j][i-1].z + 1;
                data[j][i].o = data[j][i-1].o;
            }else{
                data[j][i].z = data[j][i-1].z;
                data[j][i].o = data[j][i-1].o + 1;
            }
            if(total_o - data[j][i].o + data[j][i].z == total_z - data[j][i].z + data[j][i].o){
                cout << "YES\n" << j << ' ' << i << '\n';
                print = false;
                break;
            }
        }
    }

    }
    if(print){
        cout << "NO\n";
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