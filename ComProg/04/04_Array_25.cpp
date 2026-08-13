#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, idx, maxN = INT_MIN, sum = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
        if(v[i] > maxN){
            maxN = v[i];
            idx = i;
        }
    }
    for(int i=0;i<idx;++i){
        for(int j=i+1;j<idx;++j){
            if(v[j] < v[i]){
                sum += (v[i] - v[j]);
                v[j] = v[i];
            }
        }
    }
    for(int i=n-1;i>idx;--i){
        for(int j=i-1;j>idx;--j){
            if(v[j] < v[i]){
                sum += (v[i] - v[j]);
                v[j] = v[i];
            }
        }
    }
    cout << sum;
}