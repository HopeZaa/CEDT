#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int convert(string text){
    if(isdigit(text[0])){
        return stoi(text);
    }
    else{
        if(text == "A"){
            return 1;
        }
        else{
            return 10;
        }
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<string> data(5);
    for(auto &e : data){
        cin >> e;
    }
    int maxN = INT_MIN;
    vector<tuple<string, string, string>> ans;
    for(int i=0;i<5;++i){
        for(int j=i+1;j<5;++j){
            for(int k=j+1;k<5;++k){
                int ii = convert(data[i]), jj = convert(data[j]), kk = convert(data[k]);
                if((ii + jj + kk) % 10 >= maxN){
                    if((ii + jj + kk) % 10 > maxN){
                        maxN = (ii + jj + kk) % 10;
                        ans.clear();
                    }
                    ans.emplace_back(data[i], data[j], data[k]);
                }
            }
        }
    }
    cout << maxN << endl;
    for(auto [a, b, c] : ans){
        cout << a << ' ' << b << ' ' << c << endl;
    }
}