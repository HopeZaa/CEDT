#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    int n, cnt = 1, pv = 0;
    cin >> text >> n;
    text += '!';
    for(int i=0;i<text.length();++i){
        if(text[i] == text[i + 1]){
            ++cnt;
        }
        else{
            if(cnt >= n){
                for(int j=pv;j<=i;++j){
                    text[j] = '-';
                }
            }
            pv = i + 1;
            cnt = 1;
        }
    }
    for(auto e : text){
        if(e != '-' and e != '!'){
            cout << e;
        }
    }
}