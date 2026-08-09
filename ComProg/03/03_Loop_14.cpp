#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string a, b;
    int cnt = 0;
    getline(cin, a);
    getline(cin, b);
    if(a.length() != b.length()){
        cout << "Incomplete answer";
        return 0;
    }
    for(int i=0;i<a.length();++i){
        if(a[i] == b[i]){
            ++cnt;
        }
    }
    cout << cnt;
}