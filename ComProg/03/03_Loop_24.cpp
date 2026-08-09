#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    int cnt = 1;
    cin >> text;
    text += '!';
    for(int i=0;i<text.length();++i){
        if(text[i] == '!'){
            break;
        }
        if(text[i] == text[i + 1]){
            ++cnt;
        }
        else{
            cout << text[i] << ' ' << cnt << ' ';
            cnt = 1;
        }
    }
}