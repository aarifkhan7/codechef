#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k, x; cin >> n >> k >> x;
        // cout << "k: " << k << "; x: " << x << endl;
        if(x > k){
            cout << - 1 << endl;
        }else{
            for(int i = 0; i < n / k; i++){
                int count = 0;
                for(int j = 0; j < k; j++){
                    if(count == x){
                        count++;
                    }
                    cout << count << ' ';
                    count++;
                }
            }
            int count = 0;
            for(int i = 0; i < n % k; i++){
                if(count == x){
                    count++;
                }
                cout << count << ' ';
                count++;
            }
            cout << endl;
        }
    }
    return 0;
}