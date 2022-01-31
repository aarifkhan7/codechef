#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        ll arr1[n];
        ll arr2[m];
        
        for(int i = 0; i < n; i++){
            ll tmp; cin >> tmp;
            arr1[i] = (tmp);
        }
        for(int i = 0; i < m; i++){
            ll tmp; cin >> tmp;
            arr2[i] = (tmp);
        }

        // Finding LNDS for 1st array

        int count[n];
        count[0] = 1;
        for(int i = 1; i < n; i++){
            ll val = arr1[i];
            int poslens[i + 1];
            poslens[i] = 1;
            for(int j = i - 1; j >= 0; j--){
                if(val >= arr1[j]){
                    poslens[j] = (count[j] + 1);
                }else{
                    poslens[j] = 0;
                }
            }
            count[i] = *max_element(poslens, poslens + i + 1);
        }

        int LIS1 = *max_element(count, count + n);
        
        // Finding LNDS for 2nd array
        int count2[m];
        count2[0] = 1;
        for(int i = 1; i < m; i++){
            ll val = arr2[i];
            int poslens[i + 1];
            poslens[i] = 1;
            for(int j = i - 1; j >= 0; j--){
                if(val >= arr2[j]){
                    poslens[j] = (count2[j] + 1);
                }else{
                    poslens[j] = 0;
                }
            }
            count2[i] = *max_element(poslens, poslens + i + 1);
        }

        int LIS2 = *max_element(count2, count2 + m);

        cout << LIS1 + LIS2 << endl;

    }
    return 0;
}