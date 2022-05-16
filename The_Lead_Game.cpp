#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int cscorea[n+1];
    int cscoreb[n+1];
    int diff[n+1];
    cscorea[0] = 0;
    cscoreb[0] = 0;
    diff[0] = 0;


    for(int i = 1; i <= n; i++){
        int a, b; cin >> a >> b;
        cscorea[i] = cscorea[i-1] + a;
        cscoreb[i] = cscoreb[i-1] + b;
        diff[i] = cscoreb[i] - cscorea[i];
    }

    int mindex = 0;
    for(int i = 1; i <= n; i++){
        if(abs(diff[i]) > abs(diff[mindex])){
            mindex = i;
        }
    }

    if(diff[mindex] < 0){
        cout << 1;
    }else{
        cout << 2;
    }

    cout << ' ' << abs(diff[mindex]);

}