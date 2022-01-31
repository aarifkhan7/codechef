#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> pii;

pii center;

pii trans(pii pos){
    return make_pair(pos.first - center.first, pos.second - center.second);
}
double distcc(pii pos){
    return sqrt(pow((double)pos.first, 2) + pow((double)pos.second,2));
}
double distpd(pii pos){
    return abs(((double)pos.first - (double)pos.second)/sqrt(2));
}
double distnd(pii pos){
    return abs(((double)pos.first + (double)pos.second)/sqrt(2));
}
double findmin(double a, double b, double c){
    double min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }
    return min;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        double xs, ys; cin >> n >> xs >> ys;
        center = make_pair((n+1)/2, (n+1)/2);
        pii currpos = trans(make_pair(xs, ys));
        pii newcen = make_pair(0, 0);

        double distfromcenter = abs(currpos.first - currpos.second);
        // Lets calculate dist from pos diag
        // Nearest point on the pos diag:
        double r = abs((currpos.first - currpos.second)/2);
        pii pdiagpoint = make_pair(floor(currpos.first + r), floor(currpos.second - r));
        double distposd = abs((abs(pdiagpoint.first - currpos.first)) - floor(abs(pdiagpoint.second - currpos.second)));

        // Lets calculate dist from neg diag
        // Nearest point on the neg diag:
        r = abs((currpos.first+currpos.second)/2);
        pii ndiagpoint = make_pair(floor(currpos.first + r), floor(currpos.second + r));
        double distnegd = abs((abs(ndiagpoint.first - currpos.first)) - floor(abs(ndiagpoint.second - currpos.second)));

        cout << findmin(distfromcenter, distposd, distnegd) << endl;
        
    }
    return 0;
}