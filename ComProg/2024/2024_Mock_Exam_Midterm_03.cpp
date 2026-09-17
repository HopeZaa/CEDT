#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    ll n, sum = 0;
    cin >> n;
    string text;
    while(cin >> text){
        text.erase(text.begin());
        sum += stoi(text);
    }
    cout << sum * n;
}