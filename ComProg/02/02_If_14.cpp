#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string s1, s2;
    float g1, g2;
    char cp1, cp2, c1_1, c1_2, c2_1, c2_2;
    cin >> s1 >> g1 >> cp1 >> c1_1 >> c2_1;
    cin >> s2 >> g2 >> cp2 >> c1_2 >> c2_2;
    bool chk1 = false, chk2 = false;
    if(cp1 == 'A' and c1_1 <= 'C' and c2_1 <= 'C'){
        chk1 = true;
    }
    if(cp2 == 'A' and c1_2 <= 'C' and c2_2 <= 'C'){
        chk2 = true;
    }
    if(chk1 and chk2){
        if(g1 == g2){
            if(c1_1 == c1_2){
                if(c2_1 == c2_2){
                    cout << "Both";
                }
                else{
                    if(c2_1 < c2_2){
                        cout << s1;
                    }
                    else{
                        cout << s2;
                    }
                }
            }
            else{
                if(c1_1 < c1_2){
                    cout << s1;
                }
                else{
                    cout << s2;
                }
            }
        }
        else{
            if(g1 > g2){
                cout << s1;
            }
            else{
                cout << s2;
            }
        }
    }
    else if(chk1){
        cout << s1;
    }
    else if(chk2){
        cout << s2;
    }
    else{
        cout << "None";
    }
}