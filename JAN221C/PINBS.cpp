#include <bits/stdc++.h>
using namespace std;

vector<int> primelist(int low, int high){
    vector<int> res;
    int i;
    bool isPrime = true;

    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            res.push_back(low);

        ++low;
    }

    return res;
}

string removeLeadingZeros(string str)
{
    // Regex to remove leading
    // zeros from a string
    const regex pattern("^0+(?!$)");
 
    // Replaces the matched
    // value with given string
    str = regex_replace(str, pattern, "");
    return str;
}

int main() {
    int T; cin >> T;
    for(int i = 0; i < T; i++){
        string s; cin >> s;
        int maxno = stoi(s, 0, 2);
        // cout << "maxno:" << maxno << endl;
        
        vector<int> primes = primelist(1, maxno);

        bool found = false;

        for(int x : primes){
            string binx = removeLeadingZeros(bitset<32>(x).to_string());

            // cout << "checking " << x << " as " << binx << endl;

            if (s.find(binx) != string::npos) {
                found = true;
                break;
            }

        }
        
        if(found == true){
            cout << "Yes\n";
        }else if(found == false){
            cout << "No\n";
        }

    }
	return 0;
}
