#include<bits/stdc++.h>
using namespace std;

int toi(char c){
    return ((int) c - 48);
}
int atob(char a, char b){
    int ai = toi(a);
    int bi = toi(b);
    if(bi > ai){
        return bi - ai;
    }else{
        return bi - ai + 10;
    }
}
int mkzero(char c){
    if(c == '0'){
        return 0;
    }else{
        return 10 - toi(c);
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;

        for(int i = 0; i < n; i++){
            int n1 = mkzero(s[i]);
            int n2 = atob(s[i], s[i+1]);
            int n3 = mkzero(s[i+1]);
            if((i == 0 && n1 > k) || k == 0){
                int count = 0;
                for(int j = 0; j < n; j++){
                    if(s[j] == '0'){
                        count++;
                    }else{
                        break;
                    }
                }
                cout << count << endl;
                break;
            }else{
                if(n2 + n3 <= k){
                    // s[i] = s[i+1];
                    k -= n2;
                }else{
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}