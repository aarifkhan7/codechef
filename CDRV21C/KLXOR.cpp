#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string str; cin >> str;
        string xoredstr(k, '0');
        int count = 0;
        for(int i = 0; i < k; i++){
            int ans = 0;
            for(int j = i; j < i+k; j++){
                cout << "comparing " << ans << " and " << (int)(str[j] - 48) << endl;
                ans = ans ^ (int)(str[j] - 48);
            }
            if(ans == 1){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}