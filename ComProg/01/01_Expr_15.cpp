#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double x;
    cin >> x;
    cout << fixed << setprecision(6) << pow(x, sqrt(log((x + 1) * (x + 1)))) / (10 - x);
}