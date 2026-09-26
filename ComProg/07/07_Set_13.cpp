#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    set<string> win, lose;
    string text;
    while(getline(cin, text)){
        string a, b;
        for(int i=0;i<text.length();++i){
            if(text[i] == ' '){
                a = text.substr(0, i);
                b = text.substr(i + 1, text.length() - i - 1);
                break;
            }
        }
        win.insert(a);
        lose.insert(b);
        if(win.find(b) != win.end()){
            win.erase(b);
        }
    }
    for(auto e : lose){
        if(win.find(e) != win.end()){
            win.erase(e);
        }
    }
    if(win.empty()){
        cout << "None";
        return 0;
    }
    for(auto e : win){
        cout << e << ' ';
    }
}