#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string n, q;
    getline(cin, n);
    map<string, string> mp;
    for(int i=0;i<stoi(n);++i){
        string text, temp = "";
        getline(cin, text);
        for(int i=text.length() - 1;i>=0;--i){
            if(text[i] == ' '){
                break;
            }
            temp += text[i];
        }
        reverse(temp.begin(), temp.end());
        mp[text.substr(0, text.length() - temp.length() - 1)] = temp;
        mp[temp] = text.substr(0, text.length() - temp.length() - 1);
    }
    getline(cin, q);
    for(int i=0;i<stoi(q);++i){
        string text;
        getline(cin, text);
        cout << text << " --> ";
        if(mp.find(text) == mp.end()){
            cout << "Not found" << endl;
        }
        else{
            cout << mp[text] << endl;
        }
    }
}