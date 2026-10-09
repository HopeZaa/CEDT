#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string a, b;
    map<string, vector<string>> mp;
    vector<string> data;
    while(cin >> a >> b){
        mp[b].emplace_back(a);
        if(find(data.begin(), data.end(), b) == data.end()){
            data.emplace_back(b);
        }
    }
    for(auto e : data){
        cout << e << ": ";
        for(auto ee : mp[e]){
            cout << ee << ' ';
        }
        cout << endl;
    }
}