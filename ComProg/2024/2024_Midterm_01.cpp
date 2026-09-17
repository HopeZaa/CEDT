#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    ll n, d = 2;
    cin >> n;
    if(n < 2){
        cout << "No prime factors for numbers less than 2.";
        return 0;
    }
    while(n > 1){
        if(d * d > n){
            cout << n << ' ';
            return 0;
        }
        else{
            if(n % d == 0){
                n /= d;
                cout << d << ' ';
            }
            else{
                d += 1;
            }
        }
    }
}