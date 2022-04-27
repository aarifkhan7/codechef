#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> nums;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        nums.insert(tmp);
    }
    cout << 2 << endl << nums.size() << endl;
    return 0;
}