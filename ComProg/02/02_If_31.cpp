#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int d1, m1, y1, d2, m2, y2, red = 1, black = 0, blue = -1;
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if((y1 - 543) % 400 == 0 or (y1 - 543) % 4 == 0 and (y1 - 543) % 100 != 0){
        month[2] = 29;
    }
    red += month[m1] - d1;
    for(int i=m1 + 1;i<=12;++i){
        red += month[i];
    }
    black += (y2 - y1 - 1) * 365;
    if((y2 - 543) % 400 == 0 or (y2 - 543) % 4 == 0 and (y2 - 543) % 100 != 0){
        month[2] = 29;
    }
    else{
        month[2] = 28;
    }
    for(int i=1;i<m2;++i){
        blue += month[i];
    }
    blue += d2;
    int t = red + black + blue;
    cout << t << ' ';
    cout<< round(sin(2.0 * M_PI * t / 23.0) * 100.0) / 100.0 << ' ' << round(sin(2.0 * M_PI * t / 28.0) * 100.0) / 100.0 << ' ' << round(sin(2.0 * M_PI * t / 33.0) * 100.0) / 100.0;
}