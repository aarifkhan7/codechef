#include <bits/stdc++.h>

// Aarif Khan
// Codechef: https://www.codechef.com/users/aarifkhan_7
// Github: https://github.com/aarifkhan7

#define pi (3.141592653589)
#define MOD 1e9+7
#define ll long long int
#define all(x) x.begin(), x.end()
#define range(a, b) for(int i = a; i < b; i++)
#define range1(a, b) for(int j = a; j < b; j++)
#define inint(x) int x; cin >> x;
#define inarr(x, n) int arr[n]; range(0, n){cin >> x[i];}
#define inll(x) ll x; cin >> x;
#define instr(x) string x; cin >> x; 
#define printc(cont) for(auto x : cont) cout << x << ' '; cout << '\n';
#define printp(cont) for(auto x : cont) cout << x.first << ' ' << x.second << '\n';
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair

using namespace std;

bool odd(int n){
    return n % 2;
}
bool even(int n){
    return !(n % 2);
}

void solve(){
    inint(n)
    instr(s);
    int p = 0;
    if(n == 2){
        cout << "1\n";
        return;
    }
    range(0,n-2){
        if(s[i+1] != s[i]){
            p++;
        }
    }
    if(s[0] == '0'){
        if(odd(p)){
            cout << int(p/2) + 1 << '\n';
        }else{
            cout << 2 + int(p/2) << '\n';
        }
    }else{
        if(odd(p)){
            cout << 2 + int(p/2) << '\n';
        }else{
            cout << 1 + int(p/2) << '\n';
        }
    }
}

int main()
{
    fast;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}