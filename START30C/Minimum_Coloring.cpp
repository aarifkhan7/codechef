#include<bits/stdc++.h>
using namespace std;

typedef struct p
{
    int x;
    int y;
} p;


void solve(){
    int n, m; cin >> n >> m;
    p a, b;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    a.x --; b.x --;
    a.y --; b.y --;

    bool oneatodd = true;
    bool twoatodd = true;
    if((a.x + a.y) % 2 == 0){
        oneatodd = false;
    }
    if((b.x + b.y) % 2 == 0){
        twoatodd = false;
    }

    int check = abs(b.y - a.y) + abs(b.x - a.x);
    if(check % 2 == 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(oneatodd){
                    if((i+j) % 2 == 1){
                        cout << 1 << ' ';
                    }
                }else{
                    if((i+j) % 2 == 0){
                        cout << 1 << ' ';
                    }
                }
                if(twoatodd){
                    if((i+j) % 2 == 1){
                        cout << 2 << ' ';
                    }
                }else{
                    if((i+j) % 2 == 0){
                        cout << 2 << ' ';
                    }
                }
            }
            cout << endl;
        }
    }else{
        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(oneatodd){
                    if((i+j) % 2 == 1){
                        arr[i][j] = 1;
                    }else{
                        arr[i][j] = 2;
                    }
                }else{
                    if((i+j) % 2 == 0){
                        arr[i][j] = 1;
                    }else{
                        arr[i][j] = 2;
                    }
                }
            }
        }
        arr[b.x][b.y] = 2;
        arr[b.x - 1][b.y] = 3;
        arr[b.x + 1][b.y] = 3;
        arr[b.x][b.y - 1] = 3;
        arr[b.x][b.y + 1] = 3;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << ' ';
            }
            cout << endl;
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