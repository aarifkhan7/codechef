#include<bits/stdc++.h>
using namespace std;

int Solution(vector<int> arr){
    sort(arr.begin(), arr.end());
    vector<int> mins;
    for(int i = 0; i < arr.size() - 1; i++){
        mins.push_back(arr[i+1] - arr[i]);
    }
    int min = mins[0];
    for(int i = 0; i < mins.size(); i++){
        if(mins[i] < min && mins[i] != 0){
            min = mins[i];
        }
    }
    return min;
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