#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int g, r, n, que = -1, sum = 0, maxN = 0;
    cin >> g >> r >> n;
    vector<int> v(n);
    for(auto &e : v){
        cin >> e;
    }
    vector<bool> traf;
    for(int i=0;i<1000000;++i){
        for(int j=0;j<g;++j){
            traf.emplace_back(true);
        }
        for(int j=0;j<r;++j){
            traf.emplace_back(false);
        }
    }
    for(auto e : v){
        int cnt = 0, num = e;
        while(num <= que){
            ++cnt, ++num;
        }
        while(!traf[num]){
            ++cnt, ++num;
        }
        sum += cnt;
        maxN = max(maxN, cnt);
        que = num;
    }
    cout << sum << endl << maxN;
}
/*
5 5 5
0 1 4 5 6
g g g g g r r r r r g g g g g
0 1     4 5 - - - > 5
            6 - - - > 6

3 2 4
0 0 1 2
*/