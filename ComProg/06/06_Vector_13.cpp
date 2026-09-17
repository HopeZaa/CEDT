#include <bits/stdc++.h>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> ans;
    int st = 0, en;
    for(int i=0;i<line.length();++i){
        if(line[i] != delimiter and line[max(i - 1, 0)] == delimiter){
            st = i;
        }
        if(line[i] != delimiter and line[min(int(i + 1), int(line.length() - 1))] == delimiter or i == line.length() - 1){
            en = i + 1;
            ans.emplace_back(line.substr(st, en - st));
        }
    }
    for(int i=0;i<ans.size();++i){
        for(auto e : ans[i]){
            if(e == delimiter){
                ans.erase(ans.begin() + i--);
                break;
            }
        }
    }
    return ans;
}
int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}