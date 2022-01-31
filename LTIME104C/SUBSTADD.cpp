#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, x, y; cin >> n >> x >> y;
        int a[n]; int b[n];
        for(int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            a[i] = tmp;
        }
        for(int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            b[i] = tmp;
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            int diff = b[i] - a[i];
            if(diff == x || diff == y){
                count++;
            }
        }
        if(count == n){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
