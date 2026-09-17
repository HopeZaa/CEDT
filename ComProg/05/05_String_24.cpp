#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
bool isVowel(char text){
    if(text == 'a' or text == 'e' or text == 'i' or text == 'o' or text == 'u'){
        return true;
    }
    return false;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, temp = "";
    getline(cin, text);
    vector<string> v;
    for(int i=0;i<text.length();++i){
        if(text[i] != ' '){
            temp += text[i];
        }
        if(text[i] == ' ' or i == text.length() - 1){
            v.emplace_back(temp);
            temp = "";
        }
    }
    string st = v.front(), en = v.back();
    string pre_st = "", pre_en = "";
    for(auto e : st){
        if(isVowel(e)){
            break;
        }
        pre_st += e;
    }
    for(auto e : en){
        if(isVowel(e)){
            break;
        }
        pre_en += e;
    }
    string sub_st = st.substr(pre_st.length(), st.length() - pre_st.length()), sub_en = en.substr(pre_en.length(), en.length() - pre_en.length());
    for(int i=0;i<v.size();++i){
        if(i == 0){
            cout << pre_st << sub_en << ' ';
        }
        else if(i == v.size() - 1){
            cout << pre_en << sub_st << ' ';
        }
        else{
            cout << v[i] << ' ';
        }
    }
}