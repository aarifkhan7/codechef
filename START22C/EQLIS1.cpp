#include<bits/stdc++.h>
using namespace std;

void print(vector<int> * arr){
    for(int x : *arr)
        cout << x << ' ';
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 2){
            cout << "NO" << endl;
        }else if(n == 3){
            cout << "YES" << endl;
            cout << "1 3 2" << endl;
        }else{
            cout << "YES" << endl;
            vector<int> arr;
            for(int i = 1; i <= n; i += 2){
                arr.push_back(i);
            }
            if(n % 2 == 0){
                arr.push_back(n);
                for(int i = n - 2; i >= 2; i -= 2){
                    arr.push_back(i);
                }
                int tmpa = arr[0];
                int tmpb = arr[1];
                arr[0] = tmpb;
                arr[1] = tmpa;
            }else{
                for(int i = n - 1; i >= 2; i -= 2){
                    arr.push_back(i);
                }
            }
            print(&arr);
        }
    }
    return 0;
}