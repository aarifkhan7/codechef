#include<bits/stdc++.h>
using namespace std;

bool isPrime(int i){
    int factorcounts = 0;
    for(int z = 1; z <= i; z++){
        if(i % z == 0){
            factorcounts++;
        }
    }
    if(factorcounts == 2){
        return true;
    }else{
        return false;
    }
}

int main()
{
    for(int i = 0; i < 10; i++){
        if(isPrime(i)){
            cout << i << " is a prime no\n";
        }else{
            cout << i << " not prime\n";
        }
    }
    return 0;
}