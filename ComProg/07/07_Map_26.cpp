#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string a, b, text;
    map<string, vector<string>> mp;
    set<string> ans;
    while(cin >> a){
        text = a;
        if(cin >> b){
            mp[a].emplace_back(b);
            mp[b].emplace_back(a);
        }
        else{
            break;
        }
    }
    queue<pair<string, int>> q;
    q.emplace(text, 0);
    while(!q.empty()){
        auto [u, cnt] = q.front();
        q.pop();
        if(cnt > 2){
            continue;
        }
        ans.insert(u);
        for(auto v : mp[u]){
            q.emplace(v, cnt + 1);
        }
    }
    for(auto e : ans){
        cout << e << endl;
    }
}