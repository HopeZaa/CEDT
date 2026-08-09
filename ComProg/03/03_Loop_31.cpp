#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
ll poww(ll a, ll b){
    ll result = 1;
    for(ll i=0;i<b;++i){
        result *= a;
    }
    return result;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    ll n, m;
    ll cnt = 0;
    cin >> n >> m;
    string tempN = to_string(n);
    string tempM = to_string(m);
    if(tempN.length() == tempM.length()){
        cout << (m - n + 1) * tempM.length();
        return 0;
    }
    cnt += (m - poww(10, tempM.length() - 1) + 1) * tempM.length();
    m = poww(10, tempM.length() - 1);
    while(tempN.length() + 1 < tempM.length()){
        tempM = to_string(m);
        cnt += (m - poww(10, tempM.length() - 2)) * (tempM.length() - 1);
        m = poww(10, tempM.length() - 2);
    }
    cnt += (m - n) * tempN.length();
    cout << fixed << setprecision(0) << cnt;
}