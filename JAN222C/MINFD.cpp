#include <bits/stdc++.h>
using namespace std;

void print(vector<int> * v){
    for(int i : *v){
        cout << i << " ";
    };
    cout << endl;
}

int main() {
    int T; cin >> T;
    while(T--){
        int n, target;
        cin >> n >> target;
        
        vector<int> fds;
        
        for(int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            fds.push_back(tmp);
        }
        
        sort(fds.rbegin(), fds.rend());
        // print(&fds);
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(sum >= target){
                cout << i << endl;
                break;
            }else{
                sum += fds[i];
            }
        }
        
        if(sum < target){
            cout << -1 << endl;
        }
    }
	return 0;
}
