#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int xe, ye, re, rp, xm, ym, maxN;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    double r = re - rp;
    double dist = sqrt((xm - xe) * (xm - xe) + (ym - ye) * (ym - ye));
    double xp = (xe + (xm - xe) / dist * r);
    double yp = (ye + (ym - ye) / dist * r);
    cout << fixed << setprecision(0) << xp << ' ' << yp;
}