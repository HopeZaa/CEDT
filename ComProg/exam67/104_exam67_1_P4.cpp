#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cal(int idx, int n, vector<int> v){
    int sum = 0;
    vector<bool> vi(n, false);
    while(true){
        sum += v[idx % n];
        if(v[idx % n] > v[(idx + 1) % n] or vi[(idx + 1) % n]){
            break;
        }
        vi[idx % n] = true;
        ++idx;
    }
    return sum;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, maxN = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for(auto &e : v){
        cin >> e;
    }
    for(int i=0;i<n;++i){
        // cout << i << ' ' << cal(i, n, v) << endl;
        maxN = max(maxN, cal(i, n, v));
        for(int j=0;j<n-1;++j){
            vector<int> vv = v;
            vv.erase(vv.begin() + i);
            maxN = max(maxN, cal(j, n - 1, vv));
        }
    }
    cout << maxN;
}