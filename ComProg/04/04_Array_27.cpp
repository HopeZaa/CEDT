#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, maxN = INT_MIN, minN = INT_MAX;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;++i){
        cin >> a[i] >> b[i];
    }
    string text;
    cin >> text;
    if(text == "Zig-Zag"){
        for(int i=0;i<n;++i){
            if(i % 2 == 0){
                minN = min(minN, a[i]);
                maxN = max(maxN, b[i]);
            }
            else{
                maxN = max(maxN, a[i]);
                minN = min(minN, b[i]);
            }
        }
    }
    else{
        for(int i=0;i<n;++i){
            if(i % 2 == 1){
                minN = min(minN, a[i]);
                maxN = max(maxN, b[i]);
            }
            else{
                maxN = max(maxN, a[i]);
                minN = min(minN, b[i]);
            }
        }
    }
    cout << minN << ' ' << maxN;
}