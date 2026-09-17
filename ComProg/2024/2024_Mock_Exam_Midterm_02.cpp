#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double x;
    cin >> x;
    cout << fixed << setprecision(1) << (sqrt(x * x + cos(x * M_PI / 180.0) * cos(x * M_PI / 180.0))) / (sin(x * M_PI / 180.0) + ((cos(x * M_PI / 180.0) * cos(x * M_PI / 180.0) * cos(x * M_PI / 180.0)) / (x * x + 1.0)));
}