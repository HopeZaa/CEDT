#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    map<string, vector<string>> mp;
    vector<string> v;
    for(int i=0;i<n;++i){
        string id, x;
        cin >> id;
        v.emplace_back(id);
        while(1){
            cin >> x;
            if(x == "*"){
                break;
            }
            mp[id].emplace_back(x);
        }
    }
    string text;
    cin >> text;
    bool isFound = false;
    for(auto e : v){
        if(e == text){
            continue;
        }
        for(auto x : mp[text]){
            if(find(mp[e].begin(), mp[e].end(), x) != mp[e].end()){
                isFound = true;
                cout << ">> " << e << endl;
                break;
            }
        }
    }
    if(!isFound){
        cout << ">> Not Found";
    }
}