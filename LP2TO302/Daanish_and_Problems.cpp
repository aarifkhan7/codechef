#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

void solve(){
    int a[10];
    stack<pii> qp;
    for(int i = 0; i < 10; i++){
        int tmp;
        cin >> tmp;
        qp.push(make_pair(i+1, tmp));
    }
    int k; cin >> k;

    while(k > 0){
        auto x = qp.top();
        if(x.second == 0){
            qp.pop();
        }else if(x.second == k){
            qp.pop();
            break;
        }else if(x.second > k){
            break;
        }else if(x.second < k){
            k -= qp.top().second;
            qp.pop();
        }
    }
    while(qp.top().second == 0){
        qp.pop();
    }
    cout << qp.top().first << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}