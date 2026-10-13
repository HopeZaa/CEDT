#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<string, vector<string>> mp;
    for(int i=0;i<n;++i){
        string a, b;
        cin >> a >> b;
        mp[b].emplace_back(a);
    }
    while(m--){
        int a;
        cin >> a;
        if(a == 1){
            string name, pos;
            cin >> name >> pos;
            for(auto [x, y] : mp){
                for(int i=0;i<y.size();++i){
                    if(name == y[i]){
                        mp[x].erase(mp[x].begin() + i);
                        break;
                    }
                }
            }
            mp[pos].emplace_back(name);
        }
        else if(a == 2){
            string pos1, pos2;
            cin >> pos1 >> pos2;
            vector<string> copy = mp[pos1];
            mp.erase(pos1);
            for(auto e : copy){
                mp[pos2].emplace_back(e);
            }
        }
    }
    for(auto [a, b] : mp){
        cout << a << ": ";
        vector<string> copy = b;
        sort(copy.begin(), copy.end());
        for(auto e : copy){
            cout << e << ' ';
        }
        cout << endl;
    }
}
/*
4 2
MrA Dept1
MrB Dept2
MrC Dept3
MrD Dept4
1 MrA Dept4
1 MrA Dept2

4 4
MrA Dept1
MrB Dept2
MrC Dept3
MrD Dept4
1 MrA Dept4
1 MrA Dept2
2 Dept2 Dept4
1 MrC Dept2
*/