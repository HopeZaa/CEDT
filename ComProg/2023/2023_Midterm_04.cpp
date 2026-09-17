#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    while(n--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string text = "";
        for(int i=0;i<b;++i){
            text += char(a + '0');
        }
        for(int i=0;i<d;++i){
            text += char(c + '0');
        }
        ll num = stoll(text);
        bool isPrime = true;
        for(ll i=2;i<=sqrt(num);++i){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        cout << (isPrime ? "YES" : "NO") << endl;
    }
}