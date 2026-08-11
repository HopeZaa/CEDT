#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, ans = "";
    set<int> s;
    getline(cin, text);
    for(auto e : text){
        if(isdigit(e)){
            s.insert(e - '0');
        }
    }
    for(int i=0;i<10;++i){
        bool isChk = false;
        for(auto e : s){
            if(e == i){
                isChk = true;
            }
        }
        if(!isChk){
            ans += to_string(i);
            ans += ",";
        }
    }
    if(ans.length() != 0){
        ans.erase(ans.end() - 1);
        cout << ans;
    }
    else{
        cout << "None";
    }
}