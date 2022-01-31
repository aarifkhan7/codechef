#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> * arr){
    cout << "--------" << endl;
    for(vector<int> v : *arr){
        for(int x : v){
            cout << x << ' ';
        }
        cout << endl;
    }
    cout << "--------" << endl;
}
bool swap1(vector<vector<int>> * arr, int i, int j, int x, int y){
    if((*arr)[x][j] == 0 || (*arr)[i][y] == 0){
        return false;
    }else{
        (*arr)[i][j]++; (*arr)[x][y]++;
        (*arr)[x][j]--; (*arr)[i][y]--;
        // print(arr);
        return true;
    }
}
bool swap2(vector<vector<int>> * arr, int i, int j, int x, int y){
    if((*arr)[i][j] == 0 || (*arr)[x][y] == 0){
        return false;
    }else{
        (*arr)[i][j]--; (*arr)[x][y]--;
        (*arr)[x][j]++; (*arr)[i][y]++;
        return true;
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        // Create two matrix
        vector<vector<int>> arr;
        vector<vector<int>> farr;
        // Populate the vector
        int n; cin >> n;
        for(int i = 0; i < 3; i++){
            int a, b, c; cin >> a >> b >> c;
            vector<int> tmp = {a,b,c};
            arr.push_back(tmp);
        }
        for(int i = 0; i < 3; i++){
            vector<int> tmp;
            for(int j = 0; j < 3; j++){
                if(i == j){
                    tmp.push_back(n);
                }else{
                    tmp.push_back(0);
                }
            }
            farr.push_back(tmp);
        }

        int swaps = 0;

        // Check for ideal condition
        if(arr[0][1] == arr[1][0] && arr[0][2] == arr[2][0] && arr[1][2] == arr[2][1]){
            // cout << "ideal condition true" << endl;
            cout << arr[0][1] + arr[0][2] + arr[1][2] << endl;
        }else{
            if(arr[0][0] >= arr[1][1] && arr[0][0] >= arr[2][2]){
                while(swap1(&arr, 0,0, 1,1)){
                    swaps++;
                }
                while(swap1(&arr, 0,0, 2,1)){
                    swaps++;
                }
                while(swap1(&arr, 0,0, 1,2)){
                    swaps++;
                }
                while(swap1(&arr, 0,0, 2,2)){
                    swaps++;
                }
            }else if(arr[1][1] >= arr[0][0] && arr[1][1] >= arr[2][2]){
                while(swap1(&arr, 1,1, 0,0)){
                    swaps++;
                }
                while(swap1(&arr, 1,1, 2,2)){
                    swaps++;
                }
                while(swap1(&arr, 1,1, 0,2)){
                    swaps++;
                }
                while(swap1(&arr, 1,1, 2,0)){
                    swaps++;
                }
            }else if(arr[2][2] >= arr[0][0] && arr[2][2] >= arr[1][1]){            
                while(swap1(&arr, 2,2, 0,0)){
                    swaps++;
                }
                while(swap1(&arr, 2,2, 1,1)){
                    swaps++;
                }
                while(swap1(&arr, 2,2, 1,0)){
                    swaps++;
                }
                while(swap1(&arr, 2,2, 0,1)){
                    swaps++;
                }
            }
            
            if(arr[0][0] == n){
                swaps += arr[1][2];
            }else if(arr[1][1] == n){
                swaps += arr[0][2];
            }else if(arr[2][2] == n){
                swaps += arr[1][0];
            }

            cout << swaps << endl;
        }

    }
    return 0;
}