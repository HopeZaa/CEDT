#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    map<char, char> mp = {{'(', '['}, {'[', '('}, {')', ']'}, {']', ')'}};
    getline(cin, text);
    for(int i=0;i<text.length();++i){
        if(mp.find(text[i]) != mp.end()){
            text[i] = mp[text[i]];
        }
    }
    cout << text;
}