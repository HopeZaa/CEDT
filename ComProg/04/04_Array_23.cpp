#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, sum = 0;
    cin >> n;
    map<string, int> mp;
    for(int i=0;i<n;++i){
        string a;
        int b;
        cin >> a >> b;
        mp[a] = b;
    }
    cin.ignore();
    string text, temp = "";
    getline(cin, text);
    vector<string> v;
    bool isChk = false;
    for(int i=0;i<text.length();++i){
        if(text[i] == '-'){
            isChk = true;
            continue;
        }
        if(isChk and isupper(text[i])){
            temp += text[i];
        }
        if(text[i] == ' ' or i == text.length() - 1){
            v.emplace_back(temp);
            temp = "";
            isChk = false;
        }
    }
    string pv = v[0];
    for(int i=0;i<v.size();++i){
        if(i == 0){
            continue;
        }
        if(v[i] != pv){
            sum += mp[v[i]];
        }
        pv = v[i];
    }
    cout << sum;
}