#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, i = -1, j = 0, p;
    cin >> n;
    vector<int> d(n);
    for(auto &e : d){
        cin >> e;
    }
    p = d[n - 1];
    while(j < n - 1){
        if(d[j] <= p){
            i += 1;
            swap(d[i], d[j]);
        }
        j += 1;
    }
    swap(d[i + 1], d[n - 1]);
    for(auto e : d){
        cout << e << ' ';
    }
}