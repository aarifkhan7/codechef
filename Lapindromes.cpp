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
#define inarr(x, n) range(0, n){cin >> x[i];}
#define inll(x) ll x; cin >> x;
#define instr(x) string x; cin >> x; 
#define printc(cont) for(auto x : cont) cout << x << ' '; cout << '\n';
#define printp(cont) for(auto x : cont) cout << x.first << ' ' << x.ss << '\n';
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair

using namespace std;

void solve(){
    instr(s);
    ll n = s.size();
    string s1 (s, 0, n/2);
    int arr1[26] = {0};
    for(char c : s1){
        arr1[int(c) - int('a')]++;
    }
    if(n % 2 == 1){
        string s2(s, n/2 + 1, n/2);
        // cout << s1 << ':' << s2 << '\n';
        int arr2[26] = {0};
        for(char c : s2){
            arr2[int(c) - int('a')]++;
        }
        bool print = true;
        range(0,26){
            if(arr2[i] != arr1[i]){
                cout << "NO\n";
                print = false;
                break;
            }
        }
        if(print){
            cout << "YES\n";
        }
    }else{
        string s2(s, n/2, n/2);
        // cout << s1 << ':' << s2 << '\n';
        int arr2[26] = {0};
        for(char c : s2){
            arr2[int(c) - int('a')]++;
        }
        bool print = true;
        range(0,26){
            if(arr2[i] != arr1[i]){
                cout << "NO\n";
                print = false;
                break;
            }
        }
        if(print){
            cout << "YES\n";
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