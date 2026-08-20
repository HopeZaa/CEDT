#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    map<char, int> mp = {{'R', 1}, {'Y', 2}, {'G', 3}, {'N', 4}, {'B', 5}, {'P', 6}, {'K', 7}};
    char end[] = {'Y', 'G', 'N', 'B', 'P', 'K', '-'};
    string num;
    int n;
    getline(cin, num);
    n = stoi(num);
    while(n--){
        int sum = 0, pos;
        string text;
        getline(cin, text);
        vector<char> v;
        for(auto e : text){
            if(e != ' '){
                v.emplace_back(e);
            }
        }
        if(!v.empty() and v.front() != 'R'){
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        bool plus2 = true, chk = true;
        for(auto e : v){
            sum += mp[e];
        }
        for(int i=0;i<v.size();++i){
            if(v[i] == 'Y' and plus2){
                pos = i;
                plus2 = false;
            }
            if(plus2){
                if(v[i] != 'R' or v[i + 1] == 'R'){
                    chk = false;
                    break;
                }
                else{
                    ++i;
                }
            }
            else{
                if(v[i] != end[min(i - pos, 6)]){
                    chk = false;
                    break;
                }
            }
        }
        cout << (chk ? to_string(sum) : "WRONG_INPUT") << endl;
    }
}
/*
1
R K R K R
*/