#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int k, a, cnt = 0;
    cin >> k;
    set<int> s;
    while(cin >> a){
        s.insert(a);
    }
    for(auto e : s){
        if(s.find(k - e) != s.end()){
            ++cnt;
        }
    }
    cout << cnt / 2;
}