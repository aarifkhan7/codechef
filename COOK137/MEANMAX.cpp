#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

typedef double ll;

class Subset{
public:
    ll sumofvals;
    ll numelems;
    ll currmean;
    vector<ll> elems;

    Subset(){
        sumofvals = 0;
        numelems = 0;
        currmean = 0;
    }

    ll changeinmean(ll data){
        return ((sumofvals+data)/(numelems+1) - currmean);
    }

    void additem(ll data){
        sumofvals += data;
        numelems++;
        currmean = sumofvals/numelems;
        elems.push_back(data);
    }
    void print(){
        for(ll x : elems){
            cout << x << ' ';
        }
        cout << "------------" << endl;
    }
    ll mean(){
        return currmean;
    }

};

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++){
            ll tmp; cin >> tmp;
            arr[i] = tmp;
        }
        Subset P;
        Subset Q;
        for(int i = 0; i < n; i++){
            ll curritem = arr[i];
            if(P.changeinmean(curritem) >= Q.changeinmean(curritem)){
                P.additem(curritem);
            }else{
                Q.additem(curritem);
            }
        }

        P.print();
        Q.print();  

        setprecision(6);
        cout << P.mean() + Q.mean() << endl;
    }
    return 0;
}