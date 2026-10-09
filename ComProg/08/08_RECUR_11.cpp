#include <iostream>
using namespace std;
string dec2hex(int d) {
    if(d < 16){
        if(d < 10){
            return to_string(d);
        }
        else{
            char Char = 'A' + d % 10;
            string text = "";
            text += Char;
            return text;
        }
    }
    return dec2hex(d / 16) + dec2hex(d % 16);
}
int main() {
    int d;
    while (cin >> d) {
        cout << d << " -> " << dec2hex(d) << endl;
    }
    return 0;
}