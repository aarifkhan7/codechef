#include<bits/stdc++.h>
using namespace std;

void qsolve(){

}

void solve(){
    // Input is taken
    int arr[4];
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr+4);


    if(arr[0] == 0 && arr[1] == 1){
        if(arr[3] == arr[2] + 1){
            cout << 1 << ' ' << arr[2] << endl;
        }else{
            cout << sqrt(arr[3]) << ' ' << sqrt(arr[3]) << endl;
        }
    }else{
        if(arr[3] == arr[2] + 1){
            int t = arr[2];
            if(arr[1] == arr[2]){
                if(arr[0] == t - 1 && arr[1] == t){
                    cout << 1 << ' ' << t << endl;
                }else{
                    cout << "-1 -1" << endl;
                }
            }else{
                if(arr[0] == 1 - t && arr[1] == 1/t){
                    cout << 1 << ' ' << t << endl;
                }else{
                    cout << "-1 -1" << endl;
                }
            }
        }else{
            int a = arr[2];
            int b = arr[3];

            //Check discriminant
            if(a*a - 4*b >= 0){
                int d = a*a - 4*b;
                if(sqrt(d) * sqrt(d) == d){
                    int x = (a + sqrt(d))/2;
                    int y = b/x;

                    int a = min(x,y);
                    int b = max(x,y);


                    if(arr[0] == a-b && arr[1] == 0){
                        cout << a << " " << b << endl;
                    }else if((arr[0] == a-b && arr[1] == a/b) || (arr[0] == a/b && arr[1] == a-b)){
                        cout << a << " " << b << endl;
                    }else{
                        cout << "-1 -1" << endl;
                    }

                }else{
                    cout << "-1 -1" << endl;
                }
            }else{
                cout << "-1 -1" << endl;
            }

        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}