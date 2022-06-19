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

void solve(){
    long long int a, b, n; cin >> a >> b >> n;
    long long int x = a ^ b;
    if(a == b){
        cout << 0 << '\n';
    }else if(1 <= x && x < n){
        cout << 1 << '\n';
    }else{
        double lx = log2(long(x)); // x = 3; log2 = 1.58; floor(1)
        double ln = log2(long(n-1)); // n - 1 = 2; log2 = 1; floor(1);
        // cout << lx << ":" << ln << '\n';
        if(long(lx) > long(ln)){
            cout << -1 << '\n';
        }else{
            cout << 2 << '\n';}
   //     }else if(lx <= ln + 1){
     //       cout << 2 << '\n';
       // }
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