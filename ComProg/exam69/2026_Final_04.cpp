#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
string text;
int n;
vector<vector<char>> ans;
vector<char> temp;
char op[] = {'+', '-'};
void recur(int sum, int idx){
    if(idx == text.length()){
        if(sum == n){
            ans.emplace_back(temp);
        }
        return;
    }
    for(int i=0;i<2;++i){
        temp.emplace_back(op[i]);
        if(op[i] == '+'){
            recur(sum + (text[idx] - '0'), idx + 1);
        }
        else{
            recur(sum - (text[idx] - '0'), idx + 1);
        }
        temp.pop_back();
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    cin >> text >> n;
    recur(text[0] - '0', 1);
    for(auto v : ans){
        for(int i=0;i<text.length();++i){
            cout << text[i];
            if(i < text.length() - 1){
                cout << v[i];
            }
        }
        cout << endl;
    }
}