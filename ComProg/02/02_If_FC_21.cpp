#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > b){
        swap(a, b);
        if(d >= a){
            if(c > d){
                c -= a;
            }
        }
        else{
            c += a;
        }
        b = a + c + d;
    }
    else{
        if(c > a and a >= b){
            d += a;
        }
        if(d > c){
            b += 2;
        }
        else{
            b *= 2;
        }
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d;
}