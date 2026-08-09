#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double w, h;
    cin >> w >> h;
    cout << fixed << setprecision(15) << sqrt(w * h) / 60.0 << endl;
    cout << fixed << setprecision(15) << 0.024265 * pow(w, 0.5378) * pow(h, 0.3964) << endl;
    cout << fixed << setprecision(15) << 0.0333 * pow(w, 0.6157 - 0.0188 * log10(w)) * pow(h, 0.3);
}