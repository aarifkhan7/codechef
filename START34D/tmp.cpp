#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9,4,9,8,4};
    
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    for(vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++){
        // cout << "searching for " << *it << endl;
        vector<int>::iterator sresult = search(nums2.begin(), nums2.end(), it, it+1);
        if(sresult != nums2.end()){
            cout << (*it) << ' ';
        }
    }
    cout << endl;
    return 0;
}