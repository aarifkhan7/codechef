#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N, K;
        cin >> N >> K;
        vector<int> tmpvec;
        for(int j = 0; j < N; j++){
            int tmp; cin >> tmp;
            tmpvec.push_back(tmp);
        }
        // Solution starts here
            sort(tmpvec.begin(), tmpvec.end());
            int smallsum = 0, largesum = 0;
            if(K < N/2){
                for(int k = 0; k < K; k++){
                    smallsum += tmpvec[k];
                }
                for(int k = K; k < N; k++){
                    largesum += tmpvec[k];
                }
                cout << largesum - smallsum << endl;
            }else{
                for(int k = 0; k < K; k++){
                    largesum += tmpvec[k];
                }
                for(int k = K; k < N; k++){
                    smallsum += tmpvec[k];
                }
                cout << -largesum + smallsum << endl;
            }
        // Solution ends here
    }
	return 0;
}
