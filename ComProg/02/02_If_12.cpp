#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int s;
    cin >> s;
    if(s >= 80){
        cout << "A";
    }
    else if(s >= 70){
        cout << "B";
    }
    else if(s >= 60){
        cout << "C";
    }
    else if(s >= 50){
        cout << "D";
    }
    else{
        cout << "F";
    }
}