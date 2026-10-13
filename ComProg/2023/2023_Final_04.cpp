#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int q;
    cin >> q;
    while(q--){
        string a, b;
        cin >> a >> b;
        int A = 0, B = 0;
        vector<int> scoreA, scoreB;
        while(1){
            string text;
            cin >> text;
            if(text == "*"){
                break;
            }
            string s1 = text.substr(0, text.find('-')), s2 = text.substr(text.find('-') + 1, text.length());
            scoreA.emplace_back(stoi(s1));
            scoreB.emplace_back(stoi(s2));
            if(stoi(s1) > stoi(s2)){
                ++A;
            }
            if(stoi(s2) > stoi(s1)){
                ++B;
            }
        }
        if(A > B){
            cout << "*" << a << ' ' << A << " [ ";
            for(auto e : scoreA){
                cout << e << ' ';
            }
            cout << "]" << endl;
            cout << b << ' ' << B << " [ ";
            for(auto e : scoreB){
                cout << e << ' ';
            }
            cout << "]" << endl;
        }
        else{
            cout << a << ' ' << A << " [ ";
            for(auto e : scoreA){
                cout << e << ' ';
            }
            cout << "]" << endl;
            cout << "*" << b << ' ' << B << " [ ";
            for(auto e : scoreB){
                cout << e << ' ';
            }
            cout << "]" << endl;
        }
    }
}