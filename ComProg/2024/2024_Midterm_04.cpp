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
        for(int j=i;j<i+n;++j){
            if(v[j % n] <= v[(j + 1) % n]){
                sum += v[j % n];
            }
            else{
                sum += v[j % n];
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
            for(int j=i;j<i+n-1;++j){
                if(temp[j % (n - 1)] <= temp[(j + 1) % (n - 1)]){
                    sum += temp[j % (n - 1)];
                }
                else{
                    sum += temp[j % (n - 1)];
                    break;
                }
            }
            maxN = max(maxN, sum);
        }
    }
    cout << maxN;
}