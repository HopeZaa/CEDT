#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
string text, nm;
int n, num;
void convert(string text, int num){
    if(1000 - num == 1){
        num = 0;
        
    }
    else{

    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    cin >> text >> n;
    nm = text.substr(4, 3);
    num = stoi(nm);
    if(num + n >= 1000){
        n -= (1000 - num);
        convert(text, 1000 - num);
    }
}