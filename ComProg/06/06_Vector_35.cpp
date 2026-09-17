#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    map<string, int> digit = {{"soon", 0}, {"neung", 1}, {"song", 2}, {"sam", 3}, {"si", 4}, {"ha", 5}, {"hok", 6}, {"chet", 7}, {"paet", 8}, {"kao", 9}, {"yi", 2}, {"et", 1}, {"sip", 10}};
    map<string, int> sip = {{"sip", 10}, {"roi", 100}, {"phan", 1000}, {"muen", 10000}, {"saen", 100000}, {"lan", 1000000}};
    while(1){
        string text, temp = "";
        getline(cin, text);
        if(text == "q"){
            break;
        }
        vector<string> v;
        for(int i=0;i<text.length();++i){
            if(isalpha(text[i])){
                temp += text[i];
            }
            if(!isalpha(text[i]) or i == text.length() - 1){
                v.emplace_back(temp);
                temp = "";
            }
        }
        int sum = 0;
        for(int i=0;i<v.size();i += 2){
            if(i + 1 < v.size()){
                if(v[i] == "sip"){
                    sum += 10 + digit[v[i + 1]];
                }
                else{
                    sum += digit[v[i]] * sip[v[i + 1]];
                }
            }
            else{
                sum += digit[v[i]];
            }
        }
        cout << sum << endl;
    }
}
