#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    long long n, d = 2, q = 10;
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
            while(n % d == 0){
                n /= d;
                cout << d << ' ';
            }
            if(n % d != 0){
                d += 1;
            }
        }
    }
}