#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    map<string, int> mp;
    while(getline(cin, text)){
        int cnt = 0;
        string temp = "", time = "", hr = "", mi = "";
        for(auto e : text){
            if(e == ' '){
                ++cnt;
            }
            else if(cnt == 2){
                temp += e;
            }
            else if(cnt == 3){
                time += e;
            }
        }
        bool isMin = false;
        for(auto e : time){
            if(e == ':'){
                isMin = true;
            }
            else{
                if(!isMin){
                    hr += e;
                }
                else{
                    mi += e;
                }
            }
        }
        if(mp.find(temp) == mp.end()){
            mp[temp] = stoi(hr) * 60 + stoi(mi);
        }
        else{
            mp[temp] += stoi(hr) * 60 + stoi(mi);
        }
    }
    vector<pair<int, string>> data;
    for(auto [a, b] : mp){
        data.emplace_back(b, a);
    }
    sort(data.rbegin(), data.rend());
    for(int i=0;i<min(3, int(data.size()));++i){
        cout << data[i].second << " --> " << data[i].first / 60 << ":" << data[i].first % 60 << endl;
    }
}