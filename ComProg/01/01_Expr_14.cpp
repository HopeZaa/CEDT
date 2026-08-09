#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    n -= 543;
    int y = n % 100;
    int d = (y + (y / 4) + 11) % 7;
    cout << d;
}