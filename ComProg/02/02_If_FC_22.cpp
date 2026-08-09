#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int d, m, y, n;
    cin >> d >> m >> y;
    y -= 543;
    n = 31;
    if(m == 4 or m == 6 or m == 9 or m == 11){
        n = 30;
    }
    else{
        if(m == 2){
            n = 28;
            if(y % 400 == 0 or y % 4 == 0 and y % 100 != 0){
                n = 29;
            }
        }
    }
    d += 15;
    if(d > n){
        d -= n;
        m += 1;
    }
    if(m > 12){
        m -= 12;
        y += 1;
    }
    y += 543;
    cout << d << '/' << m << '/' << y;
}