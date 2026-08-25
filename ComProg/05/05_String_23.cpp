#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    int n;
    cin >> text >> n;
    string sub = text.substr(4, 3);
    int k = text[0] - '0';
    while(n > 0){
        int chk = (stoi(sub) + n > 1000 ? 999 : stoi(sub) + n);
        n -= (chk == 999 ? 1000 - stoi(sub) : n);
        cout << chk << ' ' << n << ':';
        if(chk == 999){
            if(text[2] != 'Z'){
                text[2] = char(text[2] + 1);
                cout << 1 << endl;
            }
            else{
                if(text[1] != 'Z'){
                    text[1] = char(text[1] + 1);
                    text[2] = 'A';
                    cout << 2 << endl;
                }
                else{
                    text[1] = 'A';
                    text[2] = 'A';
                    ++k;
                    cout << 3 << endl;
                }
            }
            sub = "000";
        }
        else{
            sub = to_string(chk);
        }
    }
    cout << k << text[1] << text[2] << '-' << sub;
}