#include<bits/stdc++.h>
using namespace std;

typedef pair<string,int> psi;

int main()
{
    int n; cin >> n;
    stack<psi> books;
    stack<int> mins;
    books.push(make_pair("default", INT_MAX));
    mins.push(INT_MAX);

    while(n--){
        int cmd; cin >> cmd;
        if(cmd != -1){
            string sub; cin >> sub;
            books.push(make_pair(sub, cmd));
            if(mins.top() > cmd){
                mins.push(cmd);
            }else{
                mins.push(mins.top());
            }
        }else{
            int count = 0;
            while(books.top().second != mins.top()){
                books.pop();
                mins.pop();
                count++;
            }
            cout << count << ' ' << books.top().first << endl;
        }
    }

    return 0;
}