#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int text, cnt = 0;
    set<int> s;
    while(cin >> text){
        ++cnt;
        if(s.find(text) != s.end()){
            cout << cnt;
            return 0;
        }
        s.insert(text);
    }
    cout << -1;
}