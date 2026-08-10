#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    map<char, int> mp = {{'R', 1}, {'Y', 2}, {'G', 3}, {'N', 4}, {'B', 5}, {'P', 6}, {'K', 7}};
    string arr = "YGNBPK-";
    while(q--){
        string text, temp = "";
        getline(cin, text);
        vector<char> v;
        int sum = 0, pos;
        bool isNeg = false;
        for(int i=0;i<text.length();i+=2){
            v.emplace_back(text[i]);
        }
        for(auto e : v){
            sum += mp[e];
        }
        for(int i=0;i<v.size();++i){
            if(v[i] == 'Y'){
                pos = i;
            }
        }
        if(v[0] != 'R'){
            isNeg = true;
        }
        for(int i=1;i<v.size();++i){
            if(v[i] == v[i - 1] and v[i] == 'R'){
                isNeg = true;
            }
        }
        for(int i=1;i<v.size();++i){
            if(v[i] != 'R' and v[i - 1] != 'R' and v[i] != 'Y' and i < pos){
                isNeg = true;
            }
        }
        for(int i=pos;i<v.size();++i){
            if(v[i] != arr[min(i - pos, 6)]){
                isNeg = true;
            }
        }
        if(isNeg){
            cout << "WRONG_INPUT" << endl;
        }
        else{
            cout << sum << endl;
        }
    }
}