#include<bits/stdc++.h>
using namespace std;

typedef struct operation{
    int first;
    int last;
    int multiplier;
} operation;
vector<operation> ops;
bool isint(double N)
{
    int X = N;
    double temp2 = N - X;
    if (temp2 > 0) {
        return false;
    }
    return true;
}
void print(vector<long> * arr){
    for(long x : *arr)
        cout << x << ' ';
    cout << endl;
}

bool checkandcorrect(vector<long> * arr, int first, int last, int sum){
    long lastelem = (*arr)[last];
    sum -= lastelem;
    
    // cout << "lastelem: " << lastelem << endl;
    // cout << "sum upto last: " << sum << endl;

    if(sum == lastelem){
        return true;
    }else if(sum > lastelem){
        if(isint((double)sum/(double)lastelem)){
            // cout << "sum is greater than lastelem and can be made equal" << endl;
            operation tmp = {
                last,
                last,
                sum/lastelem
            };
            (*arr)[last] = sum;
            ops.push_back(tmp);
            
        }else{
            checkandcorrect(arr, first, last-1, sum);
            (*arr)[last] = 2*(*arr)[last-1];
            operation tmp = {
                last,
                last,
                2
            };
            ops.push_back(tmp);
            // print(arr);
        }
    }
    else{
        if(isint((double)lastelem/(double)sum)){
            // cout << "we can multiply by " << lastelem/sum << " to finish the job" << endl;
            operation tmp = {
                first,
                last-1,
                lastelem/sum
            };
            ops.push_back(tmp);
        }else{
            int oldseclastelem = (*arr)[last-1];
            int newseclastelem = oldseclastelem;
            // cout << "old sec last elem " << oldseclastelem << endl;
            if(oldseclastelem != lastelem/2){
                newseclastelem = lastelem/2;
                operation tmp = {
                    last-1,
                    last-1,
                    newseclastelem/oldseclastelem
                };
                ops.push_back(tmp);
                // cout << "new sec last elem " << newseclastelem << endl;
            }
            // cout << "calling with params " << first << ", " << last-1 << ", " << sum << endl;
            checkandcorrect(arr, first, last-1, sum);
        }
    }
    return false;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long sum = 0;
        vector<long> nums;
        for(int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            sum += tmp;
            nums.push_back(tmp);
        }
        double log2sum = log2(sum);
        if(isint(log2sum)){
            cout << 0 << endl;
        }else{
            ops.clear();
            sort(nums.begin(), nums.end());
            // cout << "sorted array: ";
            // print(&nums);
            checkandcorrect(&nums, 0, n-1, sum);
            map<int, vector<int>> finaloplist;
            for(auto x : ops){
                for(int i = x.first; i <= x.last; i++){
                    finaloplist[x.multiplier].push_back(i);
                }
            }
            cout << finaloplist.size() << endl;
            for(auto x : finaloplist){
                cout << x.second.size() << " " << x.first << endl;
                for(int y : x.second){
                    cout << y + 1 << ' ';
                }
                cout << endl;
            }
        }
    }
    return 0;
}