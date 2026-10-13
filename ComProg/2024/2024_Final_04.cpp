#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cmp(tuple<string, int, int> a, tuple<string, int, int> b){
    if(get<2>(a) == get<2>(b)){
        if(get<1>(a) == get<1>(b)){
            return get<0>(a) < get<0>(b);
        }
        return get<1>(a) < get<1>(b);
    }
    return get<2>(a) > get<2>(b);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    map<string, pair<int, int>> data; //{name, {sum, number}}
    map<string, map<int, int>> pernalty; //{name, number, pernalty}
    map<string, map<int, bool>> chk;
    for(int i=0;i<n;++i){
        int a, c;
        string b;
        char d;
        cin >> a >> b >> c >> d;
        if(d == 'T'){
            int plus = pernalty[b][c];
            if(!chk[b][c]){
                data[b] = {data[b].first + a + plus, data[b].second + 1};
            }
            chk[b][c] = true;
        }
        if(d == 'F'){
            pernalty[b][c] = pernalty[b][c] + 20;
        }
    }
    vector<tuple<string, int, int>> v;
    for(auto [e, a] : data){
        v.emplace_back(e, a.first, a.second);
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 0, pvB = get<1>(v.front()), pvC = get<2>(v.front());
    for(auto [a, b, c] : v){
        if(b == pvB and c == pvC){
            cout << a << ' ' << c << ' ' << b << endl;
            ++cnt;
        }
        else{
            if(cnt >= 3){
                return 0;
            }
            else{
                cout << a << ' ' << c << ' ' << b << endl;
                ++cnt;
            }
        }
        pvB = b;
        pvC = c;
    }
}