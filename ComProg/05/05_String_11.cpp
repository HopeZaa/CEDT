#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, temp = "";
    while(getline(cin, text)){
        bool chk = false;
        int idx = 0;
        vector<string> ans;
        for(auto e : text){
            if(!isalpha(e) and e != ' '){
                ++idx;
                if(idx % 2 == 1){
                    chk = true;
                }
                else{
                    chk = false;
                    ans.emplace_back(temp);
                    temp = "";
                }
                continue;
            }
            if(idx % 2 == 1 and chk){
                temp += e;
            }
        }
        for(auto e : ans){
            cout << e;
        }
        cout << endl;
    }
}