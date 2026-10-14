#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int n, m, cnt = 0;
void recur(vector<pair<int, int>> data, int sum, int idx){
    if(sum > m){
        return;
    }
    if(idx == n){
        if(sum == m){
            ++cnt;
        }
        return;
    }
    for(int i=0;i<=data[idx].second;++i){
        recur(data, sum + data[idx].first * i, idx + 1);
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    cin >> n >> m;
    vector<pair<int, int>> data(n);
    for(auto &[a, b] : data){
        cin >> a >> b;
    }
    recur(data, 0, 0);
    cout << cnt;
}