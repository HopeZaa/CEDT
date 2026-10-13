#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n, sum = 0, minN = INT_MAX;
        cin >> n;
        for(int i=0;i<n;++i){
            int a;
            cin >> a;
            sum += a;
            minN = min(minN, a);
        }
        cout << sum - minN << endl;
    }
}