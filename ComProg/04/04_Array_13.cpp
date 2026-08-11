#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &e : v){
        cin >> e;
    }
    for(int i=1;i<v.size() - 1;++i){
        if(v[i] > v[i - 1] and v[i] > v[i + 1]){
            ++cnt;
        }
    }
    cout << cnt;
}
