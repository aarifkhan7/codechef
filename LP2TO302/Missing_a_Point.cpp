#include<bits/stdc++.h>
using namespace std;

struct p
{
    long x;
    long y;
};

bool rect(p a, p b, p c, p d){
    if(abs(b.x - a.x) == abs(d.x - c.x) && abs(c.y - a.y) == abs(d.y - b.y)){
        return true;
    }
    return false;
}

bool comp(p a, p b){
    if((a.x + a.y) <= (b.x + b.y)){
        return true;
    }
    return false;
}

void solve(){
    int n; cin >> n;
    vector<p> points;
    for(int i = 0; i < 4*n - 1; i++){
        p tmp;
        cin >> tmp.x >> tmp.y;
        points.push_back(tmp);
    }
    sort(points.begin(), points.end(), comp);
    for(int i = 0; i < n; i++){
        p a, b, c, d;
        a = points[4*n + 0];
        b = points[4*n + 1];
        c = points[4*n + 2];
        d = points[4*n + 3];
        vector<p> tmp = {a, b, c, d};
        if(!rect(a,b,c,d)){
            
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}