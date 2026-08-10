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
    cout << round((v[1] + v[2]) / 2.0 * 100.0) / 100.0;
}