#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string a, b, c;
    cin >> a >> b >> c;
    long dif = pow(10, (b.length() + c.length())) - pow(10, b.length());
    string a1 = a + b + c;
    string a2 = a + b;
    long dif2 = stoi(a1) - stoi(a2);
    cout << dif2 / gcd(dif2, dif) << " / " << dif / gcd(dif2, dif);
}