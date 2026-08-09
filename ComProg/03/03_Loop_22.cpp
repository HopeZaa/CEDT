#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    for(int i=2;i<=n;++i){
        while(n % i == 0){
            cout << i;
            n /= i;
            if(n != 1){
                cout << "*";
            }
        }
    }
}