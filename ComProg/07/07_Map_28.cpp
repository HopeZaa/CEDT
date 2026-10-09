#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string n;
    getline(cin, n);
    map<string, vector<string>> mp;
    for(int i=0;i<stoi(n);++i){
        string text, temp = "";
        getline(cin, text);
        vector<string> v;
        for(int i=0;i<text.length();++i){
            if(text[i] == ',' or i == text.length() - 1){
                if(i == text.length() - 1){
                    temp += text[i];
                }
                v.emplace_back(temp);
                ++i;
                temp = "";
                continue;
            }
            temp += text[i];
        }
        mp[v[0]].emplace_back(v[1]);
    }
    string text, temp = "";
    getline(cin, text);
    vector<string> v;
    for(int i=0;i<text.length();++i){
        if(text[i] == ',' or i == text.length() - 1){
            if(i == text.length() - 1){
                temp += text[i];
            }
            v.emplace_back(temp);
            ++i;
            temp = "";
            continue;
        }
        temp += text[i];
    }
    for(auto e : v){
        cout << e << " -> ";
        if(mp[e].empty()){
            cout << "Not found" << endl;
        }
        else{
            for(int i=0;i<mp[e].size();++i){
                cout << mp[e][i];
                if(i != mp[e].size() - 1){
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
}