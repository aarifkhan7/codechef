#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int lens[n];

    for(int i = 0; i < n; i++)
        cin >> lens[i];
    
    sort(lens, lens + n);

    int last = -1;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(last != lens[i]){
            count++;
            last = lens[i];
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