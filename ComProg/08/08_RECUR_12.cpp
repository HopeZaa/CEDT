#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int recur(int a, int k, int m){
    if(k == 0){
        return 1;
    }
    else if(k % 2 == 0){
        return int(pow(recur(a, k / 2, m), 2)) % m;
    }
    else{
        return a * int(pow(recur(a, k / 2, m), 2)) % m;
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int a, k, m;
    cin >> a >> k >> m;
    cout << recur(a, k, m);
}