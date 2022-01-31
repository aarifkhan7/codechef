#include<bits/stdc++.h>
using namespace std;

int Solution(vector<int> arr){
    sort(arr.begin(), arr.end());
    
    return arr[0] + arr[1];
}

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        vector<int> tmpvec;
        for(int j = 0; j < N; j++){
            int tmp;
            cin >> tmp;
            tmpvec.push_back(tmp);
        }
        cout << Solution(tmpvec) << endl;
    }
    return 0;
}