#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int d, m, y, sum = 0;
    int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> d >> m >> y;
    y -= 543;
    if(y % 400 == 0 or y % 4 == 0 and y % 100 != 0){
        arr[2] = 29;
    }
    for(int i=1;i<m;++i){
        sum += arr[i];
    }
    sum += d;
    cout << sum;
}