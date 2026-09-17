#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    map<string, string> plus = {{"A", "A"}, {"B+", "A"}, {"B", "B+"}, {"C+", "B"}, {"C", "C+"}, {"D+", "C"}, {"D", "D+"}, {"F", "D"}};
    map<string, string> minus = {{"A", "B+"}, {"B+", "B"}, {"B", "C+"}, {"C+", "C"}, {"C", "D+"}, {"D+", "D"}, {"D", "F"}, {"F", "F"}};
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    while(n--){
        string a, b;
        cin >> a >> b;
        v.emplace_back(a, b);
    }
    string text;
    while(cin >> text){
        char op = text[text.length() - 1];
        text.erase(text.end() - 1);
        if(op == '+'){
            for(int i=0;i<v.size();++i){
                if(v[i].first == text){
                    v[i].second = plus[v[i].second];
                    break;
                }
            }
        }
        else{
            for(int i=0;i<v.size();++i){
                if(v[i].first == text){
                    v[i].second = minus[v[i].second];
                    break;
                }
            }
        }
    }
    vector<pair<string, string>> ans;
    for(auto e : grade){
        for(auto [a, b] : v){
            if(b == e){
                ans.emplace_back(a, b);
            }
        }
    }
    for(auto [a, b] : ans){
        cout << a << ' ' << b << endl;
    }
}
