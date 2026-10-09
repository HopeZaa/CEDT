#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, q;
    cin >> n;
    map<string, string> mp;
    for(int i=0;i<n;++i){
        string a, b;
        cin >> a >> b;
        mp[a] = b;
        mp[b] = a;
    }
    cin >> q;
    while(q--){
        string text;
        cin >> text;
        if(mp.find(text) == mp.end()){
            cout << "Not found" << endl;
        }
        else{
            cout << mp[text] << endl;
        }
    }
}