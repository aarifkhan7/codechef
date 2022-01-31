#include<bits/stdc++.h>
using namespace std;

int larger(vector<int> * arr, int k){
    if(k == 0){
        return 0;
    }else{
        // int count = 0;
        // for(int i = k - 1; k >= 0; k--){
        //     if((*arr)[i] > (*arr)[k]){
        //         count++;
        //     }
        // }
        // return count + larger(arr, k - 1);

        int count = 0;
        for(int i = k - 1; i >= 0; i--){
            // cout << "comparing " << (*arr)[k] << " and " << (*arr)[i] << endl;
            if((*arr)[k] < (*arr)[i]){
                count++;
            }
        }
        return count + larger(arr, k-1);
    }
}

int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        arr[i] = tmp;
    }

    cout << larger(&arr, n - 1) << endl;

    return 0;
}