#include<bits/stdc++.h>
using namespace std;

int minof3(int a, int b, int c){
    int m = a;
    if(b < m){
        m = b;
    }
    if(c < m){
        m = c;
    }
    return m;
}

void solve(){
    int n; cin >> n;
    int arr[n];
    int odds = 0;
    int evens = 0;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp % 2 == 0){
            evens++;
        }else{
            odds++;
        }
        arr[i] = tmp;
    }
    if(odds == n || evens == n){
        cout << 0 << endl;
    }else{
        int oddstoeven, evenstoodd1 = evens, evenstoodd2 = 0;
        if(odds % 2 == 0){
            oddstoeven = odds/2;
        }else{
            oddstoeven = odds;
        }
        int e = evens;
        while(e > 0){
            if(e % 2 == 0){
                evenstoodd2 += e/2;
                e /= 2;
            }else{
                e--;
                evenstoodd2++;
                evenstoodd2 += e/2;
                e /= 2;
            }
        }
        cout << minof3(oddstoeven, evenstoodd1, evenstoodd2) << endl;
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