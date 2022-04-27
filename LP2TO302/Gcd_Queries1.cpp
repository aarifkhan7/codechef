#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    int a[n+1] = {0};
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    while(q--){
        int l, r; cin >> l >> r;
        int min = INT_MAX;

        for(int i = 1; i <= n; i++){
            if(i < l || i > r){
                if(a[i] < min)
                    min = a[i];
            }
        }
        
        int dividesall = true;
        vector<int> divisors;
        for(int z = 1; z <= sqrt(min); z++){
            if(min % z == 0){
                if(z == min/z){
                    divisors.push_back(z);
                }else{
                    divisors.push_back(z);
                    divisors.push_back(min/z);
                }
            }
        }
        sort(divisors.rbegin(), divisors.rend());
        for(int divisor : divisors){
                dividesall = true;
                for(int i = 1; i <= n; i++){
                    if(i < l || i > r){
                        if(a[i] % divisor != 0){
                            dividesall = false;
                            break;
                        }
                    }
                }
                if(dividesall){
                    cout << divisor << endl;
                    break;
                }
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