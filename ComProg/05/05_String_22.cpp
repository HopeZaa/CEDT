#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int maxN = INT_MIN;
string ansA, ansB;
void chk(string a, string b){
    int cnt = 0;
    for(int i=0;i<min(a.length(), b.length());++i){
        if(a[i] == b[i]){
            ++cnt;
        }
    }
    if(cnt > maxN){
        maxN = cnt;
        ansA = a;
        ansB = b;
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string a, b;
    cin >> a >> b;
    string tempA = a, tempB = b;
    chk(a, b);
    for(int i=0;i<min(a.length(), b.length());++i){
        a.insert(a.begin(), '-');
        chk(a, b);
    }
    a = tempA, b = tempB;
    for(int i=0;i<min(a.length(), b.length());++i){
        b.insert(b.begin(), '-');
        chk(a, b);
    }
    cout << ansA << endl << ansB << endl << maxN;
}