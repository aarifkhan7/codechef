#include<bits/stdc++.h>
using namespace std;

bool even(int n){
    if(n % 2 == 0)
        return true;
    return false;
}

bool odd(int n){
    if(n % 2 == 1)
        return true;
    return false;
}

void solve(){
    int n; cin >> n;
    vector<int> odds;
    vector<int> evens;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp % 2 == 0){
            evens.push_back(tmp);
        }else{
            odds.push_back(tmp);
        }
    }

    // if(evens.size() == 0){
    //     if(odd(odds.size())){
    //         cout << -1 << endl;
    //     }else{
    //         for(int x : odds)
    //             cout << x << ' ';
    //         cout << endl;
    //     }
    // }else if(odds.size() == 0){
    //     cout << -1 << endl;
    // }else if(odds.size() == 1 && evens.size() == 1){
    //     cout << -1 << endl;
    // }else{

        // error is odds = 1 and evens > 1

    //     int s = odds.size();
    //     if(even(s)){
    //         for(int x : odds)
    //             cout << x << ' ';
    //         for(int x : evens)
    //             cout << x << ' ';
    //         cout << endl;
    //     }else{
    //         for(int i = 0; i < odds.size() - 1; i++){
    //             cout << odds[i] << ' ';
    //         }
    //         for(int x : evens)
    //             cout << x << ' ';
    //         cout << odds[odds.size() - 1] << ' ';
    //         cout << endl;
    //     }
    // }

    if(odds.size() < 2){
        cout << -1 << endl;
    }else{
        if(even(odds.size())){
            for(int x : odds)
                cout << x << ' ';
            for(int x : evens)
                cout << x << ' ';
            cout << endl;
        }else{
            if(evens.size() >= 1){
                for(int i = 0; i < odds.size() - 1; i++){
                    cout << odds[i] << ' ';
                }
                for(int x : evens)
                    cout << x << ' ';
                cout << odds[odds.size() - 1] << ' ';
            }else{
                cout << -1 << endl;
            }
        }
    }


    /*
    odd count < 2
        -1
    else
        odd count even
            simple print
        odd count odd
            check even count >= 1
            print all odd 
    */
   

}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}