#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, string>> books;
    int n; cin >> n;
    while(n--){
        int cmdt; cin >> cmdt;
        if(cmdt != -1){
            string bookname; cin >> bookname;
            books.push_back(make_pair(cmdt, bookname));
        }else{
            // Calculate the book with minimum no of exercises;
            int ind = 0;
            for(int i = 0; i < books.size(); i++){
                if(books[i].first < books[ind].first){
                    ind = i;
                }
            }

            cout << books.size() - ind - 1 << " ";
            cout << books[ind].second << endl;
            books.erase(books.begin() + ind + 1, books.end());
        }
    }
    return 0;
}