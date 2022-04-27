#include<bits/stdc++.h>
using namespace std;

pair<long long int,long long int> qsolve(long long int sum, long long int product){
    if(sum * sum - 4 * product >= 0){
        long long int d = sum * sum - 4 * product;
        if(sqrt(d) * sqrt(d) == d){
            long long int x = (sum + sqrt(d))/2;
            long long int y = (sum - sqrt(d))/2;
            if(x >= 1 && y >= 1){
                return make_pair(y,x);
            }else{
                return make_pair(-1,-1);
            }
        }else{
            return make_pair(-1,-1);
        }
    }else{
        return make_pair(-1,-1);
    }
}

long long int solve(){
    long long int arr[4];
    for(long long int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    sort(arr, arr+4);

    pair<long long int,long long int> solution1 = qsolve(arr[2], arr[3]);
    if(!(solution1.first == -1 && solution1.second == -1)){
        long long int a = solution1.first;
        long long int b = solution1.second;
        if((arr[0] == a-b && arr [1] == a/b) || (arr[0] == a/b && arr[1] == a-b) || (arr[0] == b-a && arr[1] == b/a) || (arr[0] == b/a && arr[1] == b-a)){
            cout << min(a,b) << ' ' << max(a,b) << endl;
            return 0;
        }
    }

    pair<long long int,long long int> solution2 = qsolve(arr[3], arr[2]);
    if(!(solution2.first == -1 && solution2.second == -1)){
        long long int a = solution2.first;
        long long int b = solution2.second;
        if((arr[0] == a-b && arr[1] == a/b) || (arr[0] == a/b && arr[1] == a-b) || (arr[0] == b-a && arr[1] == b/a) || (arr[0] == b/a && arr[1] == b-a)){
            cout << min(a,b) << ' ' << max(a,b) << endl;
            return 0;
        }
    }

        cout << "-1 -1" << endl;
    

    return 0;
}

int main()
{
    long long int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}