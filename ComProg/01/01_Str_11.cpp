#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    cin >> text;
    int sum = 0, n;
    for(int i=0;i<12;++i){
        sum += (13 - i) * (text[i] - '0');
    }
    n = (11 - (sum % 11)) % 10;
    cout << text[0] << '-' << text.substr(1, 4) << '-' << text.substr(5, 5) << '-' << text.substr(10, 2) << '-' << n;
}