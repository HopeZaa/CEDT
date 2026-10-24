#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cnt = 0;
string ans[21];
vector<string> Final;
int cmp(pair<string, int> a, pair<string, int> b){
    return a.second < b.second;
}
void recur(vector<pair<string, int>> data, int idx, int sum, int n){
    if(sum > n){
        return;
    }
    if(idx == data.size()){
        if(sum == n){
            ++cnt;
            string temp = "";
            for(int i=0;i<idx;++i){
                if(ans[i] != "-"){
                    temp += ans[i] + " ";
                }
            }
            Final.emplace_back(temp);
        }
        return;
    }
    ans[idx] = "-";
    recur(data, idx + 1, sum, n);
    ans[idx] = data[idx].first;
    recur(data, idx + 1, sum + data[idx].second, n);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<string, int>> data(m);
    for(auto &[a, b] : data){
        cin >> a >> b;
    }
    sort(data.begin(), data.end(), cmp);
    recur(data, 0, 0 , n);
    cout << cnt << endl;
    reverse(Final.begin(), Final.end());
    for(int i=0;i<cnt;++i){
        cout << i + 1 << ' ' << Final[i] << endl;
    }
}