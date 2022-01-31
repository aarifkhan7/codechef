#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int mon, piz, burg;
        cin >> mon >> piz >> burg;
        if(mon < piz && mon < burg){
            cout << "NOTHING" << endl;
        }else{
            if(mon > piz){
                cout << "PIZZA" << endl;
            }else if(mon > burg){
                cout << "BURGER" << endl;
            }
        }
    }
    return 0;
}