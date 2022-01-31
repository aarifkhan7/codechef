#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, target;
        cin >> n >> target;
        
        vector<int> fds;
        
        for(int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            fds.push_back(tmp);
        }
        
        sort(fds.rbegin(), fds.rend());

        

    }
    return 0;
}