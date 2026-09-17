#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int n, arr[1441], qs[1441], maxN = INT_MIN;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]--;
    }
    for(int i=1;i<=1440;++i){
        qs[i] = qs[i - 1] + arr[i];
        maxN = max(maxN, qs[i]);
    }
    cout << maxN;
}