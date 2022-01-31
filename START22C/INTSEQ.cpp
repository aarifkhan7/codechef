#include<bits/stdc++.h>
using namespace std;

bool isint(double N)
{
    int X = N;
    double temp2 = N - X;
    if (temp2 > 0) {
        return false;
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        vector<int> sigmaupto;
        sigmaupto.push_back(0);
        
        vector<int> intarr;
        int count = 0;

        for(int i = 1; ; i++){
            double ai = ((double) k - (double) sigmaupto[i - 1])/2;

            if(isint(ai)){

                intarr.push_back(ai);
                sigmaupto.push_back(sigmaupto[i-1] + ai);
                count++;

                cout << ai << " is a element of interesting sequence" << endl;

                
                if(sigmaupto[i] == sigmaupto[i-1]){
                    count--;
                    break;}
            }else{
                cout << ai << " not an integer" << endl;
                
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}