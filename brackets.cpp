#include <iostream>
#include <string>

using namespace std;

int max(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int f(string s){
    int balance = 0;
    int max_balance = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == '('){
            balance += 1;
        }
        if (s[i] == ')'){
            balance -= 1;
        }
        max_balance = max(max_balance, balance);
    }

    return max_balance;

}

int main(){

}
