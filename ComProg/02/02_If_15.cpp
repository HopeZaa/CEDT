#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    cin >> text;
    string sub = text.substr(0, 2);
    if(text.length() == 10){
        if(sub == "06" or sub == "08" or sub == "09"){
            cout << "Mobile number";
        }
        else{
            cout << "Not a mobile number";
        }
    }
    else{
        cout << "Not a mobile number";
    }
}