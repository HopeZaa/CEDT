#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int n, a, b;
vector<int> g[10000001];
bool isTrue;
void recur(int u){
    if(u == b){
        return;
    }
    for(auto v : g[u]){
        if(v == b){
            isTrue = true;
            return;
        }
        recur(v);
    }
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
    cout << (isTrue ? "yes" : "no");
}