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
    stack<int> odds;
    stack<int> evens;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp % 2 == 0){
            evens.push(tmp);
        }else{
            odds.push(tmp);
        }
    }

    if(odds.size() == 0){
        cout << -1 << endl;
    }else if(evens.size() == 0){
        if(even(odds.size())){
            while(!odds.empty()){
                cout << odds.top() << ' ';
                odds.pop();
            }
            cout << endl;
        }else{
            cout << -1 << endl;
        }
    }else if(evens.size() == 1 && odds.size() == 1){
        cout << -1 << endl;
    }else{
        int oddsums = odds.size() - 1;
        if(odd(oddsums)){
            while(!odds.empty()){
                cout << odds.top() << ' ';
                odds.pop();
            }
            while(!evens.empty()){
                cout << evens.top() << ' ';
                evens.pop();
            }
            cout << endl;
        }else{
            int t = 1;
            while(odds.size() > t){
                cout << odds.top() << ' ';
                odds.pop();
            }
            while(!evens.empty()){
                cout << evens.top() << ' ';
                evens.pop();
            }
            cout << odds.top() << ' ';
            cout << endl;
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