#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, cnt = 0;
    cin >> n;
    map<string, double> mp;
    for(int i=0;i<n;++i){
        string a;
        double b;
        cin >> a >> b;
        mp[a] = b;
    }
    string text;
    double num;
    while(cin >> text){
        if(isdigit(text[0])){
            num = stoi(text);
        }
        else{
            if(cnt != 0){
                cout << " -> ";
            }
            cout << fixed << setprecision(0) << num * mp[text];
        }
    }
}