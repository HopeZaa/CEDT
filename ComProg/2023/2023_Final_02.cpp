#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cmp(pair<string, int> a, pair<string, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    map<string, int> mp;
    int n, m, maxN = INT_MIN, cnt = 1;
    cin >> n;
    for(int i=0;i<n;++i){
        string a;
        int b;
        cin >> a >> b;
        maxN = max(maxN, b);
        if(mp.find(a) != mp.end()){
            mp[a] = max(mp[a], b);
        }
        else{
            mp[a] = b;
        }
    }
    cin >> m;
    vector<pair<string, int>> v;
    for(auto [a, b] : mp){
        v.emplace_back(a, b);
    }
    sort(v.begin(), v.end(), cmp);
    set<int> s;
    for(auto [a, b] : v){
        s.insert(-b);
    }
    for(auto e : s){
        if(cnt > m){
            return 0;
        }
        ++cnt;
        int score = -e;
        cout << score << ' ';
        for(auto [a, b] : v){
            if(score == b){
                cout << a << ' ';
            }
        }
        cout << endl;
    }
}
/*
5
B 50
A 10
C 50
A 100
D 80
2

9
D 50
A 80
C 50
E 10
K 20
E 20
A 10
AA 50
D 100
3
*/