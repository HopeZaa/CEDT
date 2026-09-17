#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m, sum = 0;
    cin >> n >> m;
    vector<int> v(n);
    for(auto &e : v){
        cin >> e;
        sum += e;
    }
    sum -= m;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(v[i] + v[j] == sum){
                cout << i << ' ' << v[i] << endl << j << ' ' << v[j];
                return 0;
            }
        }
    }
}