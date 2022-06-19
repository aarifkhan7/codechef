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
    int n, x; cin >> n >> x;
    string s = ""; string tmp;
    if(odd(n)){
        x--;
        if(2*x + 1 > n){
            cout << -1 << '\n';
            return;
        }
        for(int i = 0; i < x; i++){
            s.push_back(char(int('a') + i));
        }
        for(int i = x; i < n/2; i++){
            s.push_back('z');
        }
        tmp = s; reverse(tmp.begin(), tmp.end());
        cout << s << 'z' << tmp << endl;
    }else{
        if(2*x > n){
            cout << -1 << '\n';
            return;
        }
        for(int i = 0; i < x; i++){
            s.push_back(char(int('a') + i));
        }
        for(int i = x; i < n/2; i++){
            s.push_back(char(int('a') + x-1));
        }
        tmp = s; reverse(tmp.begin(), tmp.end());
        cout << s << tmp << '\n';
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