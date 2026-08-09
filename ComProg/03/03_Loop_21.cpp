#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text;
    while(getline(cin, text)){
        bool isUp = false, isLow = false, isDig = false, isSpe = false;
        for(auto e : text){
            if(isupper(e)){
                isUp = true;
            }
            if(islower(e)){
                isLow = true;
            }
            if(isdigit(e)){
                isDig = true;
            }
            if(!isdigit(e) and !isupper(e) and !islower(e)){
                isSpe = true;
            }
        }
        if(text.length() >= 12 and isUp and isLow and isDig and isSpe){
            cout << ">> strong" << endl;
        }
        else if(text.length() >= 8 and isUp and isLow and isDig){
            cout << ">> weak" << endl;
        }
        else{
            cout << ">> invalid" << endl;
        }
    }
}