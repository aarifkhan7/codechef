#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    cout << 1 << " : " << 1 << endl;
    int cor = 1;
    for(int i = 2; i <= n; i++){
        cout << (cor | i) << " : " << i << endl;
        cor = cor | i;
    }
}