#include <iostream>
using namespace std;

struct box{
    int r,b,g;
};

int main(){
    int t; cin>>t;
    struct box b1; struct box b2; struct box b3;
    while(t!=0){
        int n; cin>>n; int swap=0;
        cin>>b1.r>>b1.g>>b1.b>>b2.r>>b2.g>>b2.b>>b3.r>>b3.g>>b3.b;
        if(b1.r==n || b2.g==n || b3.b==n){
            if(b1.r==n)
            cout<<n-b3.b<<endl;
            else if(b2.g==n)
            cout<<n-b1.r<<endl;
            else
            cout<<n-b2.g<<endl;
        }

        else{
            
            if((b2.r !=0) && (b3.r==0)){
                swap+=b2.r;
                b1.r=n; b2.r=0; b2.g+=b1.g; b2.b+=b1.b; b1.g=0 ; b1.b=0;
                swap+=b2.b;
                cout<<swap<<endl;
            }
            else if((b3.r !=0) && (b2.r==0)){
                swap+=b3.r;
                b1.r=n; b3.r=0; b3.g+=b1.g; b3.b+=b1.b; b1.g=0 ; b1.b=0;
                swap+=b3.g;
                cout<<swap<<endl;
            }
            else{
                while((b1.g !=0) && (b2.r !=0)){
                    swap++; b2.g++; b1.g--; b2.r--; b1.r++;
                }
                while((b1.b!=0) && (b3.r!=0)){
                    swap++; b3.b++; b1.b--; b3.r--; b1.r++;
                }
                if(b2.r!=0){
                    swap+=b2.r; b2.r=0; b1.r=n; b2.b+=b1.b; b1.b=0;
                }
                if(b3.r!=0){
                    swap+=b3.r; b3.r=0; b1.r=n; b3.g+=b1.g; b1.g=0;
                }
                swap+=b2.b;
                cout<<swap<<endl;
            }
        }
        t--;
    }

    return 0;

}