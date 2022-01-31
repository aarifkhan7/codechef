#include<bits/stdc++.h>
using namespace std;

int nitin, sob;

string winner(){
    if(sob > nitin){
        return "sob";
    }else{
        return "nitin";
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        int c, d;
        cin >> nitin >> sob >> c >> d;
        if(winner() == "sob"){
            nitin += c;
            if(winner() == "sob"){
                nitin += d;
            }else{
                sob += d;
            }
        }else{
            sob += c;
            if(winner() == "nitin"){
                sob += d;
            }else{
                nitin += d;
            }
        }
        if(winner() == "sob")
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }
}