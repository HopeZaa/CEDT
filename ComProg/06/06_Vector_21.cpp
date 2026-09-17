#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    cin >> text;
    text += '$';
    vector<string> ans;
    ans.emplace_back(text);
    for(int i=0;i<text.length() - 1;++i){
        char temp = text[0];
        text.erase(text.begin());
        text += temp;
        ans.emplace_back(text);
    }
    sort(ans.begin(), ans.end());
    for(auto e : ans){
        cout << e[e.length() - 1];
    }
}
