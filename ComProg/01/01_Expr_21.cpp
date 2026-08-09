#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int st = h1 * 3600 + m1 * 60 + s1;
    int fn = h2 * 3600 + m2 * 60 + s2;\
    if(fn < st){
        fn += (24 * 3600);
    }
    int t = fn - st;
    cout << t / 3600 << ":" << (t % 3600) / 60 << ":" << t % 60;
}