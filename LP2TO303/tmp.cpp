#include<bits/stdc++.h>
using namespace std;

bool comp(stack<int> a, stack<int> b){
    return a.top() < b.top();
}

int main()
{
    vector<stack<int>> stacks;
    for(int i = 1; i <= 3; i++){
        stack<int> tmp;
        for(int j = 1; j <= 3; j++){
            tmp.push(i*j);
        }
        stacks.push_back(tmp);
    }
    sort(stacks.begin(), stacks.end(), comp);
    return 0;
}