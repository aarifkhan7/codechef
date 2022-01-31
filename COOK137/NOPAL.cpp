#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char c = 'a';
        string final(n, '0');
        for(int i = 0; i < n; i++){
            final[i] = c;
            c++;
            if(c == '{')
                c = 'a';
        }
        cout << final << endl;
    }
    return 0;
}