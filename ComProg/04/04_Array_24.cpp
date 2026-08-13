#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    vector<string> ans;
    priority_queue<int> pq;
    string text = "";
    for(auto &e : v){
        cin >> e;
        pq.emplace(e);
        text += to_string(e);
        text += " ";
    }
    ans.emplace_back(text);
    bool isPrint = false;
    while(!pq.empty()){
        auto e = pq.top();
        pq.pop();
        int pos;
        text = "";
        for(int i=0;i<v.size();++i){
            if(v[i] == e){
                pos = i;
            }
        }
        // cout << "=" << e << ' ' << pos << '=' << n << '-';
        if(v[n - 1] == e){
            --n;
            continue;
        }
        reverse(v.begin(), v.begin() + pos + 1);
        if(!isPrint){
            for(auto e : v){
                text += to_string(e);
                text += " ";
            }
            isPrint = false;
            ans.emplace_back(text);
        }
        text = "";
        if(v[--n] != e){
            reverse(v.begin(), v.begin() + n + 1);
            isPrint = true;
            for(auto e : v){
                text += to_string(e);
                text += " ";
            }
            ans.emplace_back(text); 
        }
    }
    string pv = "-";
    for(auto e : ans){
        if(e != pv){
            cout << e << endl;
        }
        pv = e;
    }
}