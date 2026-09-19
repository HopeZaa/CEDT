#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
bool chk(vector<int> v){
    bool isUp;
    if(v[1] > v[0]){
        isUp = true;
    }
    else if(v[1] < v[0]){
        isUp = false;
    }
    else{
        return false;
    }
    for(int i=1;i<v.size() - 1;++i){
        if(isUp and (v[i] <= v[i - 1] or v[i] <= v[i + 1])){
            return false;
        }
        if(!isUp and (v[i] >= v[i - 1] or v[i] >= v[i + 1])){
            return false;
        }
        isUp = !isUp;
    }
    return true;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, maxN = 0;
    cin >> n;
    vector<int> v(n), ans;
    vector<vector<int>> sub;
    for(auto &e : v){
        cin >> e;
    }
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            vector<int> temp;
            for(int k=i;k<=j;++k){
                temp.emplace_back(v[k]);
            }
            sub.emplace_back(temp);
        }
    }
    for(auto e : sub){
        if(e.size() >= 3 and chk(e)){
            if(e.size() > maxN){
                maxN = e.size();
                ans = e;
            }
        }
    }
    string text;
    cin >> text;
    if(text == "length"){
        cout << maxN;
    }
    if(text == "sequence"){
        if(!maxN){
            cout << "None";
            return 0;
        }
        for(auto e : ans){
            cout << e << ' ';
        }
    }
}
/*
16
1 1 2 0 3 4 2 5 4 7 1 3 2 1 3 4
sequence
*/