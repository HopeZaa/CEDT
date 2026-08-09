#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double a;
    cin >> a;
    double L = 0, U = a;
    while(L <= U){
        double x = L + (U - L) / 2.0;
        if(abs(a - pow(10, x)) <= pow(10, -10) * max(a, pow(10, x))){
            cout << x;
            return 0;
        }
        if(pow(10, x) > a){
            U = x;
        }
        else{
            L = x;
        }
    }
}