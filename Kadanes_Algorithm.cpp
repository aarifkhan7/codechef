#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    int maxtill[n+1];
    maxtill[0] = pow(-10, 7) - 1;
    for(int i = 1; i <= n; i++)
        maxtill[i] = max(maxtill[i-1] + arr[i], arr[i]);
    cout << *max_element(maxtill, maxtill + n + 1) << '\n';
}