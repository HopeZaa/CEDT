#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<double> v(n);
    for(auto &e : v){
        cin >> e;
    }
    for(int i=0;i<n;++i){
        double sum = v[i];
        for(int j=i;j>=1;--j){
            sum = v[j - 1] + 1.0 / sum;
        }
        cout << setprecision(10) << sum << endl;
    }
}