#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        if(n == 1 && k == 1){
            cout << 1 << endl;
        }else if(n != 1 && k == 1){
            cout << -1 << endl;
        }else{
            for(int i = 1; i < k; i++){
                cout << i << ' ';
            }
            for(int i = n; i >= k; i--){
                cout << i << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}