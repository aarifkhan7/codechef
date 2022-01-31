#include<bits/stdc++.h>
using namespace std;

bool peakable[3][3] = {
    {false, true, true},
    {true, false, true},
    {true, true, false}
};

vector<int> nextelem[3][3] = {
    {{}, {0}, {0,1}},
    {{1,2}, {}, {0,1}},
    {{1,2}, {2}, {}}
};

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 1 || n == 2){
            cout << 0 << endl;
        }else{
            
        }
    }
    return 0;
}