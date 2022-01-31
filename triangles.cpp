#include <iostream>
using namespace std;

int triangle(int b){
    if(b == 1 || b == 2 || b == 3){
        return 0;
    }else{
        return ((b/2 - 1) + triangle(b - 2));
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int b;
        cin >> b;

        cout << triangle(b);

    }
}
