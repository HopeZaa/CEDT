#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<string> v(n);
    for(auto &e : v){
        cin >> e;
    }
    cin.ignore();
    string text;
    getline(cin, text);
    for(auto e : text){
        if(e == 'C'){
            for(int i=0;i<n/2;++i){
                v.insert(v.end(), v[i]);
            }
            v.erase(v.begin(), v.begin() + n / 2);
        }
        else if(e == 'S'){
            for(int i=0;i<n/2;++i){
                v.insert(v.end(), v[i]);
                v.insert(v.end(), v[n / 2 + i]);
            }
            v.erase(v.begin(), v.begin() + n);
        }
    }
    for(auto e : v){
        cout << e << ' ';
    }
}