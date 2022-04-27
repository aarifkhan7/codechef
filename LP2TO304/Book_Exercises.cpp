#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    stack<int> mins;
    stack<pair<string,int>> exer;
    
    int currentmin = INT_MAX;
    
    while(t--){
        int cmd; cin >> cmd;
        if(cmd != -1){
            string sub; cin >> sub;
            if(cmd < currentmin){
                currentmin = cmd;
            }
            mins.push(currentmin);
            exer.push(make_pair(sub, cmd));
        }else{
            int booksremoved = 0;
            while(exer.top().second != mins.top()){
                exer.pop();
                mins.top();
                booksremoved++;
            }
            cout << booksremoved << ' ' << exer.top().first << endl;
            currentmin = mins.top();
        }
    }
    return 0;
}