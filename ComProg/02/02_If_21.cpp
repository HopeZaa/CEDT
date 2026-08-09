#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double num;
    cin >> num;
    char text = '-';
    if(num < 1000){
        cout << num;
        return 0;
    }
    else if(num < 1e6){
        num /= 1e3;
        text = 'K';
    }
    else if(num < 1e9){
        num /= 1e6;
        text = 'M';
    }
    else{
        num /= 1e9;
        text = 'B';
    }
    if(num < 10){
        cout << round(num * 10) / 10.0 << text;
    }
    else{
        cout << round(num) << text;
    }
}