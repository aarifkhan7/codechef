#include<bits/stdc++.h>
using namespace std;

int findmax(int a, int b, int c){
    int max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    return max;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        int maxvotes = findmax(a, b, c);
        if(maxvotes < 51){
            cout << "NOTA" << endl;
        }else{
            if(a == maxvotes){
                cout << "A" << endl;
            }else if(b == maxvotes){
                cout << "B" << endl;
            }else if(c == maxvotes){
                cout << "C" << endl;
            }
        }
    }
    return 0;
}