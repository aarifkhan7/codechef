#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int total, infec;
        cin >> total >> infec;
        cout << min(total - infec, infec) << endl;
    }
    return 0;
}