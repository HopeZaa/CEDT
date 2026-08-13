#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<int> v(26, 0);
    string text;
    getline(cin, text);
    for(int i=0;i<text.length();++i){
        text[i] = tolower(text[i]);
        if(islower(text[i])){
            ++v[text[i] - 'a'];
        }
    }
    for(int i=0;i<26;++i){
        if(v[i] != 0){
            cout << char('a' + i) << " -> " << v[i] << endl;
        }
    }
}