#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){ 
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    vector<string> member(n);
    for(auto &e : member){
        cin >> e;
    }
    vector<pair<int, string>> temp(n);
    for(auto &[a, b] : temp){
        cin >> b >> a;
    }
    vector<pair<int, string>> copy = temp;
    sort(temp.rbegin(), temp.rend());
    vector<tuple<string, int, int>> prize;
    for(auto [a, b] : copy){
        for(int i=0;i<temp.size();++i){
            auto [c, d] = temp[i];
            if(a == c and b == d){
                prize.emplace_back(d, c, i + 1);
                break;
            }
        }
    }
    bool grid[101][1001];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            grid[i][j] = false;
        }
    }
    for(int i=0;i<m;++i){
        int a;
        cin >> a;
        grid[i][a - 1] = true;
        grid[i][a] = true;
    }
    map<string, tuple<string, int, int>> mp;
    for(int i=0;i<n;++i){
        int idx = i, row = 0;
        while(row < m){
            int newIdx = idx;
            if(grid[row][idx]){
                if(idx + 1 < n and grid[row][idx + 1]){
                    ++newIdx;
                }
                if(idx - 1 >= 0 and grid[row][idx - 1]){
                    --newIdx;
                }
            }
            ++row;
            idx = newIdx;
        }
        mp[member[i]] = {get<0>(prize[idx]), get<1>(prize[idx]), get<2>(prize[idx])};
    }
    while(q--){
        string text;
        cin >> text;
        if(text == "rank"){
            int a;
            cin >> a;
            for(auto [x, y] : mp){
                auto [name, price, rank] = y;
                if(rank == a){
                    cout << x << ' ' << name << endl;
                    break;
                }
            }
        }
        else if(text == "name"){
            string a;
            cin >> a;
            auto [name, price, rank] = mp[a];
            cout << name << ' ' << price << endl;
        }
    }
}