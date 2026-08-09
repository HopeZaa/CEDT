#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, d, m, y;
    string month[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    cin >> text;
    d = text.substr(0, 2);
    m = text.substr(3, 2);
    y = text.substr(6, 4);
    cout << month[stoi(m)] << " " << d << ", " << stoi(y) - 543;
}