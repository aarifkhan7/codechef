#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
        vector<int> s(n+1, 0);
        int primes = 0;
        for(int i = 2; i < n; i++){
            if(s[i] == 0){
                int k = 2;
                for(int j = k*i; j < n; ){
                    s[j] = i;
                    k++;
                    j = k * i;
                }
                primes++;
            }
        }
        return primes;
}

int main()
{
    int n; cin >> n;
    cout << countPrimes(n) << endl;
    return 0;
}