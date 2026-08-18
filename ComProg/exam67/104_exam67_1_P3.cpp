#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double n, l = -1, r = 1;
    cin >> n;
    vector<double> c(int(n + 1));
    for(auto &e : c){
        cin >> e;
    }
    int q = 100;
    while(q--){
        double mid = l + (r - l) / 2.0;
        double sum = 0;
        if(l == r){
            break;
        }
        for(int i=0;i<=n;++i){
            sum += c[i] / pow(1 + mid, i);
        }
        if(sum > 0){
            l = mid;
        }
        else{
            r = mid;
        }
        // cout << setprecision(8) << l << ' ' << r << endl;
    }
    cout << setprecision(8) << l;
}