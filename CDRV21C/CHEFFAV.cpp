#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--){
        string str; cin >> str;
        if(str.find_first_of("code") < str.find_first_of("chef")){
            cout << "AC" << endl;}
        else{
            cout << "WA" << endl;}
    }
	return 0;
}
