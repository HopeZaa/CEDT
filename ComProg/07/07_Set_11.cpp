#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    set<int> a, b;
    string text1, text2;
    getline(cin, text1);
    getline(cin, text2);
    map<char, int> mp1, mp2;
    for(auto e : text1){
        if(e == ' '){
            continue;
        }
        if(mp1.find(tolower(e)) == mp1.end()){
            mp1[tolower(e)] = 1;
        }
        else{
            mp1[tolower(e)]++;
        }
    }
    for(auto e : text2){
        if(e == ' '){
            continue;
        }
        if(mp2.find(tolower(e)) == mp2.end()){
            mp2[tolower(e)] = 1;
        }
        else{
            mp2[tolower(e)]++;
        }
    }
    if(mp1.size() != mp2.size()){
        cout << "NO";
        return 0;
    }
    for(int i=0;i<mp1.size();++i){
        if(mp1[i] != mp2[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}