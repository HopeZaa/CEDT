#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, cnt = 0;
    set<int> s;
    while(cin >> n){
        s.insert(n);
    }
    cout << s.size() << endl;
    for(auto e : s){
        ++cnt;
        if(cnt > min(10, int(s.size()))){
            return 0;
        }
        cout << e << ' ';
    }
}
