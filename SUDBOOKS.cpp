#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a == 1){
            int tmp; cin >> tmp;
            s.push(tmp);
        }else if(a == -1){
            if(s.empty()){
                cout << "kuchbhi?" << endl;
            }else{
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
}
