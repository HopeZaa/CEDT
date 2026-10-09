#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int n, a, b;
vector<int> g[100001], path;
set<vector<int>> ans;
void recur(int u){
    path.emplace_back(u);
    if(u == b){
        ans.insert(path);
        path.pop_back();
        return;
    }
    for(auto v : g[u]){
        recur(v);
    }
    path.pop_back();
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    cin >> n >> a >> b;
    for(int i=0;i<n;++i){
        int x, y;
        cin >> x >> y;
        g[x].emplace_back(y);
    }
    recur(a);
    if(ans.empty()){
        cout << "no";
        return 0;
    }
    for(auto v : ans){
        for(auto e : v){
            cout << e;
            if(e != v.back()){
                cout << " -> ";
            }
        }
        cout << endl;
    }
}