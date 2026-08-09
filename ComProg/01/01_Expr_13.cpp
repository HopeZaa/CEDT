#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    x1 = (-b - sqrt((b * b) - 4.0 * a * c)) / (2.0 * a);
    x2 = (-b + sqrt((b * b) - 4.0 * a * c)) / (2.0 * a);
    cout << fixed << setprecision(3) << x1 << ' ' << x2;
}