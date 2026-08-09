#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<string> v{"01", "02", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "51", "53", "55", "58"};
    string text;
    cin >> text;
    if(find(v.begin(), v.end(), text) != v.end()){
        cout << "OK";
    } else {
        cout << "Error";
    }
}