#include<bits/stdc++.h>
using namespace std;



int main()
{
    int T; cin >> T;
    
    vector<int> waystoget;
    waystoget.push_back(0);
    waystoget.push_back(0);
    waystoget.push_back(1);    
    waystoget.push_back(1);


    for(int i = 0; i < T; i++){
        int x; cin >> x;
        if(x < 4){
            cout << waystoget[x] << endl;
        }else{
            for(int i = waystoget.size(); i <= x; i++){
                waystoget[i] = waystoget[i-2] + waystoget[i-3];
            }
            cout << waystoget[x] << endl;
        }
    }
    
}