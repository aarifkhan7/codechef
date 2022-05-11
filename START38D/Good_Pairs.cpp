#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == b[j] && a[j] == b[i]){
                count++;
            }
        }
    }

    cout << count << '\n';

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}