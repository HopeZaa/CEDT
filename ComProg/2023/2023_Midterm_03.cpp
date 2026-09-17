#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    map<string, double> mp = {{"A", 4}, {"B+", 3.5}, {"B", 3}, {"C+", 2.5}, {"C", 2}, {"D+", 1.5}, {"D", 1}, {"F", 0}};
    double sum1 = 0, sum2 = 0;
    while(n--){
        string a;
        double b;
        cin >> a >> b;
        sum1 += mp[a] * b;
        sum2 += b;
    }
    cout << round(sum1 / sum2 * 100) / 100;
}