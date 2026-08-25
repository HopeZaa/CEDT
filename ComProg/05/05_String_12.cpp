#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int maxN = INT_MIN;
    vector<string> v;
    while(true){
        string text;
        cin >> text;
        if(text == "END"){
            break;
        }
        maxN = max(maxN, int(text.length()));
        v.emplace_back(text);
    }
    for(int i=0;i<v.size();++i){
        v[i].insert(0, maxN - v[i].length(), '0');
    }
    string ans = "";
    int c = 0, s;
    for(int i=maxN - 1;i>=0;--i){
        s = 0;
        for(auto e : v){
            s += e[i] - '0';
        }
        s += c;
        if(i != 0){
            ans = to_string(s % 10) + ans;
            c = s / 10;
        }
        else{
            ans = to_string(s) + ans;
        }
        // cout << s << ' ' << c << endl;
    }
    cout << ans;
}