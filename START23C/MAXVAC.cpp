#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        string s; cin >> s;
        string scpy = s;

        int numhol = 0;

        int delcount = 0;

        for(int i = 0; i < n - x + 1; ){
            int work = false;
            for(int j = i; j < i + x; j++){
                if(s[j] == '1'){
                    work = true;
                    // cout << "can't take vacation on " << i << "; work present on " << j << endl;
                    i = j + 1;
                    break;
                }
            }
            if(work == false){
                numhol++;
                scpy.erase(scpy.begin() + i - delcount, scpy.begin() + i + x - delcount);
                delcount += x;
                // cout << "can take vacation on " << i << endl;
                i = i + x;
            }
        }

        int newzerocount = 0;
        int nscpy = n - delcount;
        for(int i = 0; i < nscpy; i++){
            if(scpy[i] == '0'){
                newzerocount++;
            }
        }
        // cout << "newzerocount: " << newzerocount << "; x = " << x << endl;
        if(newzerocount == x - 1 && nscpy > newzerocount){
            for(int i = 0; i < nscpy - x + 1; i++){
                int tmpzerocount = 0;
                int tmponecount = 0;
                for(int j = i; j < i + x; j++){
                    if(scpy[j] == '1'){
                        tmponecount++;
                    }else if(scpy[j] == '0'){
                        tmpzerocount++;
                    }else{
                        // cout << "logic error!" << endl;
                    }
                }
                if(tmponecount == 1 && (tmponecount + tmpzerocount == x)){
                    numhol++;
                    break;
                }
            }
        }
        cout << numhol << endl;
    }
    return 0;
}