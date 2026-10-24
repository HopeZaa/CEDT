#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m, minN = INT_MAX, maxN = INT_MIN;
    cin >> n >> m;
    vector<pair<string, int>> data(n);
    vector<pair<string, string>> ansMin, ansMax;
    for(auto &[a, b] : data){
        cin >> a >> b;
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(abs(m - (data[i].second + data[j].second)) <= minN){
                if(abs(m - (data[i].second + data[j].second)) < minN){
                    ansMin.clear();
                    minN = abs(m - (data[i].second + data[j].second));
                }
                ansMin.emplace_back(data[i].first, data[j].first);
            }
            if(abs(m - (data[i].second + data[j].second)) >= maxN){
                if(abs(m - (data[i].second + data[j].second)) > maxN){
                    ansMax.clear();
                    maxN = abs(m - (data[i].second + data[j].second));
                }
                ansMax.emplace_back(data[i].first, data[j].first);
            }
        }
    }
    cout << "Best Pair:" << endl;
    for(auto [a, b] : ansMin){
        cout << a << ' ' << b << endl;
    }
    cout << "Worst Pair:" << endl;
    for(auto [a, b] : ansMax){
        cout << a << ' ' << b << endl;
    }
}