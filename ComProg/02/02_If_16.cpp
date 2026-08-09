#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    if(n > 0){
        cout << "positive" << endl;
        if(n % 2 == 0){
            cout << "even";
        }
        else{
            cout << "odd";
        }
    }
    else if(n < 0){
        cout << "negative" << endl;
        if(abs(n) % 2 == 0){
            cout << "even";
        }
        else{
            cout << "odd";
        }
    }
    else{
        cout << "zero" << endl << "even";
    }
}