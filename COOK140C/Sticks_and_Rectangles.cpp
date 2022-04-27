#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[101] = {0};
    
    for(int i = 1; i <= n; i++){
        int tmp; cin >> tmp;
        arr[tmp]++;
    }

    int scount = 0;
    for(int i = 1; i <= 100; i++){
        if(arr[i] % 2 != 0){
            scount++;
        }
    }

    int totalmod = (n + scount) % 4;
    if(totalmod == 0){
        cout << scount << endl;
    }else if(totalmod == 3){
        cout << scount + 1 << endl;
    }else if(totalmod == 2){
        cout << scount + 2 << endl;
    }else if(totalmod == 1){
        cout << scount + 3 << endl;
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