#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int m, time = 100;
    cin >> m;
    vector<double> c(m + 1);
    for(auto &e : c){
        cin >> e;
    }
    double l = -1, r = 1;
    double irr = l + (r - l) / 2;
    while(time--){
        irr = l + (r - l) / 2;
        double sum = 0;
        for(int y=0;y<=m;++y){
            sum += (c[y]) / (pow(1.0 + irr, y));
        }
        if(sum > 0){
            l = irr;
        }
        else{
            r = irr;
        }
    }
    cout << setprecision(8) << irr;
}