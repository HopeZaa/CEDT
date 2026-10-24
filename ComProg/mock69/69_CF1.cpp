#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
bool isOp(char a){
    if(a == '+' or a == '-' or a == '*'){
        return true;
    }
    return false;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    const int MOD = 1e9 + 7;
    string text;
    ll n, temp = 0;
    cin >> text >> n;
    map<char, ll> mp;
    for(int i=0;i<n;++i){
        char a;
        ll b;
        cin >> a >> b;
        mp[a] = b;
    }
    vector<string> num;
    for(int i=0;i<text.length();++i){
        if(!isOp(text[i])){
            if(isdigit(text[i])){
                temp = (temp * 10 + text[i] - '0') % MOD;
            }
            else{
                temp = (temp * 10 + mp[text[i]]) % MOD;
            }
        }
        if(isOp(text[i]) or i == text.length() - 1){
            num.emplace_back(to_string(temp));
            if(i != text.length() - 1){
                string tmp = "";
                tmp += text[i];
                num.emplace_back(tmp);
            }
            temp = 0;
        }
    }
    ll ans = stoll(num[0]);
    for(int i=1;i<num.size();i+=2){
        if(num[i] == "+"){
            ans = (ans + stoll(num[i + 1])) % MOD;
        }
        if(num[i] == "-"){
            ans = (ans - stoll(num[i + 1]) + MOD) % MOD;
        }
        if(num[i] == "*"){
            ans = (ans * stoll(num[i + 1])) % MOD;
        }
    }
    cout << ans;
}