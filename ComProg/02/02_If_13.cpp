#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<double> v(4);
    for(auto &e : v){
        cin >> e;
    }
    sort(v.begin(), v.end());
    cout << fixed << setprecision(2) << (v[1] + v[2]) / 2.0;
}