#include<bits/stdc++.h>
using namespace std;

// Typedef for shorting code
typedef vector<long>::iterator vli;

class operation{
public:
    int multip;
    vector<int> indices;
    
    operation(int m){
        multip = m;
        indices.clear();
    }
};

// Creating variables to store data
vector<operation> ops;
vector<pair<int, long>> nums;
long sum;

// Helper functions
void print(vector<pair<int, long>> * arr){
    for(pair<int, long> x : *arr)
        cout << x.first << ":" << x.second << endl;
}
bool comp(pair<int, long> a, pair<int, long> b){
    if(a.second < b.second)
        return true;
    return false;
}
bool isint(double N)
{
    int X = N;
    double temp2 = N - X;
    if (temp2 > 0) {
        return false;
    }
    return true;
}

// Recursive function
void checkandcorrect(vector<pair<int, long>>::iterator first, vector<pair<int, long>>::iterator last, long sum){
    pair<int, long> lastelem = (*last);
    long sumuptolastelem = sum - lastelem.second;
    // cout << "lastelem: " << lastelem.second << endl;
    // cout << "sumuptolastelem: " << sumuptolastelem << endl;

    if(sumuptolastelem == lastelem.second){
        
    }else if(sumuptolastelem < lastelem.second){
        if(isint((double)lastelem.second/(double)sumuptolastelem)){
            int multip = (double)lastelem.second/(double)sumuptolastelem;
            // cout << "can be made equal; by multiplying " << multip << " to first part" << endl;
            operation tmp(multip);
            for(vector<pair<int, long>>::iterator i = first; i < last; i++){
                tmp.indices.push_back((*i).first);
                // cout << "multiply " << multip << " to " << (*i).first << ":" << (*i).second << endl;
            }
            ops.push_back(tmp);
        }else{
            // cout << "recursive call on just smaller array" << endl;
            // cout << "calling with params (" << (*first).first << ":" << (*first).second <<"), (" << (*(last-1)).first << ":" << (*(last-1)).second <<"), " << sumuptolastelem << endl;
            
            // make the second last element half of the last elem
            pair<int, long> seclastelem = (*(last-1));
            if(lastelem.second / seclastelem.second != 2){
                int multip = lastelem.second / seclastelem.second;
                operation tmp (multip);
                tmp.indices.push_back(seclastelem.first);
                ops.push_back(tmp);
                (*(last-1)).second = lastelem.second / 2;
            }
            checkandcorrect(first, last-1, sumuptolastelem);
        }
    }
    else if(sumuptolastelem > lastelem.second){
        if(isint((double) sumuptolastelem/(double) lastelem.second)){
            int multip = (double) sumuptolastelem / (double) lastelem.second;
            operation tmp(multip);
            tmp.indices.push_back(lastelem.first);
            ops.push_back(tmp);
            // cout << "multiplied last element " << lastelem.second << " with " << multip << " to make " << lastelem.second * multip << endl;
            (*last).second *= multip;
        }else{
            // cout << "recursive call on just smaller array" << endl;
            // cout << "calling with params (" << (*first).first << ":" << (*first).second <<"), (" << (*(last-1)).first << ":" << (*(last-1)).second <<"), " << sumuptolastelem << endl;
            
            checkandcorrect(first, last-1, sumuptolastelem);
            // cout << "changing last elem to double of second last elem ie " << (*last).second << " to " << ((*(last-1)).second)*2 << endl;
            (*last).second = (*(last-1)).second * 2;
            operation tmp(2);
            tmp.indices.push_back((*last).first);
            ops.push_back(tmp);
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        // Initialise global variable to default;
        ops.clear(); nums.clear(); sum = 0;

        // Take input
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            long tmp; cin >> tmp;
            nums.push_back(make_pair(i, tmp));
            sum += tmp;
        }

        if(!isint((double) log2((float)sum))){
            // Sort the array from ascending to descending based on second value of pair
            sort(nums.begin(), nums.end(), comp);

            // Start the recursive function
            checkandcorrect(nums.begin(), nums.end()-1, sum);

            // Create a map of multiplier and index
            map<int, vector<int>> mrecord;
            for(operation o : ops){
                for(int index : o.indices){
                    mrecord[o.multip].push_back(index);
                }
            }

            // Check the map for multiple duplicate indices at same multiplier
            for(auto record : mrecord){
                int multi = record.first;
                int freq[100] = {0};
                for(auto x : record.second){
                    freq[x]++;
                }
                for(int i = 0; i < 100; i++){
                    if(freq[i] > 1){
                        // A indice is duplicate at the current multiplier
                        // Remove from this multiplier
                        for(int j = 0; j < record.second.size(); j++){
                            if(record.second[j] == i){
                                record.second.erase(record.second.begin() + j);
                            }
                        }
                        // And to another
                        mrecord[pow(multi, freq[i])].push_back(i);
                        // Delete the record if indices vector becomes empty
                        if(record.second.size() == 0){
                            mrecord.erase(mrecord.find(multi));
                        }
                    }
                }
            }

            // Print the mapping
            cout << mrecord.size() << endl;
            for(auto record : mrecord){
                cout << record.second.size() << ' ' << record.first << endl;
                for(auto i : record.second)
                    cout << i + 1 << ' ';
                cout << endl;
            }
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}