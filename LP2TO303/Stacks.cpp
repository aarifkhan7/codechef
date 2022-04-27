#include<bits/stdc++.h>
using namespace std;

bool comp(stack<int> a, stack<int> b){
    return a.top() < b.top();
}

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    vector<stack<int>> stacks;
    for(int i = 0; i < n; i++){
        int num = arr[i];
        bool found = false;
        vector<stack<int>>::iterator pstack;
        for(vector<stack<int>>::iterator s = stacks.begin(); s != stacks.end(); s++){
            if((*s).top() > num){
                found = true;
                pstack = s;
                break;
            }
        }
        if(!found){
            stack<int> tmp;
            tmp.push(num);
            stacks.push_back(tmp);
        }else{
            (*pstack).push(num);
        }
    }
    cout << stacks.size() << ' ';
    for(auto s : stacks){
        cout << s.top() << ' ';
    }
    cout << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}