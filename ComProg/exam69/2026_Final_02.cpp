#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cmp(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int d, b, n;
    cin >> d >> b >> n;
    vector<pair<string, int>> data(n);
    for(auto &[x, y] : data){
        cin >> x >> y;
    }
    int m;
    cin >> m;
    vector<string> ignore(m);
    for(auto &e : ignore){
        cin >> e;
    }
    sort(data.begin(), data.end(), cmp);
    int pv = 0, now = 0;
    vector<string> ans;
    while(now < d){
        now += b;
        if(now >= d){
            break;
        }
        bool isFound = false;
        for(auto [x, y] : data){
            if(find(ignore.begin(), ignore.end(), x) == ignore.end() and y <= now and y > pv){
                ans.emplace_back(x);
                now = y;
                isFound = true;
                break;
            }
        }
        if(!isFound){
            cout << "fail " << pv;
            return 0;
        }
        pv = now;
    }
    cout << ans.size() << endl;
    for(auto e : ans){
        cout << e << endl;
    }
}