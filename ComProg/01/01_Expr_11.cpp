#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
double fact(int n){
    if(n <= 1){
        return 1;
    }
    return n * fact(n - 1);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    cout << (M_PI - fact(10) / pow(8, 8) + pow(log(9.7), (7.0 / sqrt(71) - sin(40 * M_PI / 180)))) / (pow(1.2, pow(2.3, 1.0 / 3.0)));
}