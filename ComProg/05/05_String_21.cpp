#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, temp = "";
    cin >> text;
    vector<string> ans;
    for(int i=0;i<text.length();++i){
        if(i == text.length() - 1){
            if(!isdigit(text[i])){
                temp += text[i];
                ans.emplace_back(temp);
            }
            else{
                string temp2 = "";
                temp2 += text[i];
                ans.emplace_back(temp2);
            }
        }
        else{
            if(isupper(text[i]) or isdigit(text[i])){
                if(!temp.empty()){
                    ans.emplace_back(temp);
                }
                if(isdigit(text[i])){
                    string temp2 = "";
                    temp2 += text[i];
                    ans.emplace_back(temp2);
                }
                temp = "";
            }
            if(!isdigit(text[i])){
                temp += text[i];
            }
        }
    }
    bool pvDigit = false;
    string anss = "";
    for(auto e : ans){
        if(isdigit(e[0])){
            pvDigit = true;
            anss += e;
        }
        else{
            if(pvDigit){
                anss += ", " + e + ", ";
            }
            else{
                anss += e + ", ";
            }
            pvDigit = false;
        }
    }
    cout << anss;
}