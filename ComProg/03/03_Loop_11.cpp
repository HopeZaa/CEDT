#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double n, cnt = 0, sum = 0;
    while(cin >> n){
        if(n == -1){
            if(!cnt){
                cout << "No Data";
                return 0;
            }
            cout << fixed << setprecision(2) << sum / cnt;
            return 0;
        }
        sum += n;
        ++cnt;
    }
}