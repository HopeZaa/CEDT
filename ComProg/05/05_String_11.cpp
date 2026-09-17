#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    while(getline(cin, text)){
        bool copy = false;
        vector<string> ans;
        string temp = "";
        for(int i=0;i<text.length();++i){
            char e = text[i];
            if(e == text[text.length() - 1]){
                copy = !copy;
                continue;
            }
            if(copy){
                temp += e;
            }
            else{
                ans.emplace_back(temp);
                temp = "";
            }
            // cout << i << ' ' << copy << ":";
            // for(auto e : ans){
            //     cout << e << ' ';
            // }
            // cout << endl;
        }
        ans.emplace_back(temp);
        for(auto e : ans){
            cout << e;
        }
        cout << endl;
    }
}