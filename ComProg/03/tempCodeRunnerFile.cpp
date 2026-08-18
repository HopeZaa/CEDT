#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, sen = "-", s;
    int cnt = 0;
    getline(cin, text);
    getline(cin, sen);
    s += sen;
    s += '-';
    for(int i=1;i<=sen.length() - text.length();++i){
        string temp = sen.substr(i, text.length());
        if(text == temp and !isalpha(sen[i - 1]) and !isalpha(sen[i + text.length()])){
            ++cnt;
        }
    }
    cout << cnt;
}