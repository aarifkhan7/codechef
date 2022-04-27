#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int nones = n/2;
            
            vector<int> a(n);
            
            for(int i=0;i<nones;i++)
            a[i]=1;
            for(int i=nones;i<n;i++)
            a[i]=0;
            
            for(int j=1;j<=n;j++)
            {
            rotate(a.begin(),a.begin()+a.size()-1,a.end());
            
            for(int i=0;i<n;i++)
            cout<<a[i];
            
            cout<<endl;}
            cout<<endl;
        }
    }
	// your code goes here
	return 0;
}