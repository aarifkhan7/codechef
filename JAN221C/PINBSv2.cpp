#include <bits/stdc++.h>
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
        
        bool found = false;

        for(int i = 0; i < maxno; i++){
            if(isPrime(i)){
                string bin_i = removeLeadingZeros(bitset<16>(i).to_string());
                if(s.find(bin_i) != std::string::npos){
                    found = true;
                    break;
                }
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
