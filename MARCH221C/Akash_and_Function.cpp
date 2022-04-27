#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    // bool arr[n+1] = {false};
    // arr[1] = true;
    // int uniq = 1;
    // for(int i = 2; i <= n; i++){
    //     if(i % 2 == 0){
    //         if(arr[i / 2] == true){
    //             arr[i] = true;
    //         }else{
    //             arr[i / 2] = true;
    //             arr[i] = true;
    //             uniq++;
    //         }
    //     }else{
    //         arr[i] = true;
    //         uniq++;
    //     }
    // }
    // cout << uniq << endl;
    if(n % 2 == 0){
        cout << n/2 << endl;
    }else{
        cout << (n/2) + 1 << endl;
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