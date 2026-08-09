#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, sen;
    int cnt = 0;
    cin >> text;
    cin.ignore();
    getline(cin, sen);
    for(int i=0;i<sen.length();++i){
        string temp = sen.substr(i, text.length());
        if(text == temp){
            ++cnt;
        }
    }
    cout << cnt;
}