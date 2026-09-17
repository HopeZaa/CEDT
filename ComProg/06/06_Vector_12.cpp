#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<int> v;
    int n;
    cin >> n;
    while(n != 1){
        v.emplace_back(n);
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n = 3 * n + 1;
        }
    }
    v.emplace_back(1);
    for(int i=max(0, int(v.size()) - 15);i<v.size();++i){
        cout << v[i] << (i == v.size() - 1 ? "" : "->");
    }
}