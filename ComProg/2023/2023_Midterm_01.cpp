#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= 100){
        if(a < b){
            if(b < c){
                a = a + 3;
                b = a + c;
                c = b + a;
            }
            else if(a < c){
                a = 2 * a;
                b = a + b;
                c = b + c;
            }
            else{
                a = c + a;
                b = 2 * b;
                c = b - a;
            }
        }
        else{
            if(c > a){
                a = 3 * b;
                b = c + a;
                c = a + b;
            }
            else if(b > c){
                a = b + c;
                b = 7 * a;
                c = b - a;
            }
            else{
                a = c - 5;
                b = a - b;
                c = 3 * b;
            }
        }
    }
    else{
        do{
            if(b >= c){
                break;
            }
            else{
                a += b * b + c * c;
            }
            if(a % 10 == 5){
                break;
            }
            else{
                if(a % 2 == 0){
                    ++b;
                }
                else{
                    --c;
                }
            }
        }while(a / (b * c) <= 20);
    }
    cout << a << ' ' << b << ' ' << c;
}