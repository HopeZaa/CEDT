#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double u, theta, t;
    cin >> u >> theta >> t;
    theta = theta * M_PI / 180;
    double h = (t - u * sin(theta) / 10.0) * (u * sin(theta) + 0.5 * 10.0 * (t - 3.0 * (u * sin(theta)) / 10.0));
    double r = u * cos(theta) * t;
    cout << round(h * 10) / 10 << ' ' << round(r * 10) / 10;
}