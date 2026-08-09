#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    float p, k = 1, t = 1;
    cin >> p;
    t = (t * (365 - (k - 1))) / 365;
    while(!(1 - t >= p)){
        ++k;
        t = (t * (365 - (k - 1))) / 365;
    }
    cout << k;
}