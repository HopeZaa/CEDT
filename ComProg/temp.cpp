#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, maxN = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for(auto &e : v){
        cin >> e;
    }
    for(int i=0;i<n;++i){
        int sum = 0;
        for(int j=0;j<n;++j){
            sum += v[(i + j) % n];
            if(v[(i + j + 1) % n] < v[(i + j) % n]){
                break;
            }
        }
        maxN = max(maxN, sum);
    }
    for(int k=0;k<n;++k){
        vector<int> temp = v;
        temp.erase(temp.begin() + k);
        for(int i=0;i<n-1;++i){
            int sum = 0;
            for(int j=0;j<n-1;++j){
                sum += temp[(i + j) % (n - 1)];
                if(temp[(i + j + 1) % (n - 1)] < temp[(i + j) % (n - 1)]){
                    break;
                }
            }
            maxN = max(maxN, sum);
        }
    }
    cout << maxN;
}