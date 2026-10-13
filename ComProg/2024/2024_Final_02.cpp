#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    string text;
    cin >> n >> text;
    vector<pair<float, float>> v(n);
    for(auto &[a, b] : v){
        cin >> a >> b;
    }
    float sumXY = 0, sumX = 0, sumY = 0, sumX2 = 0;
    for(int i=0;i<n;++i){
        sumXY += v[i].first * v[i].second;   
        sumX += v[i].first;
        sumY += v[i].second;
        sumX2 += v[i].first * v[i].first;
    }
    float m = ((n * sumXY) - (sumX * sumY)) / ((n * sumX2) - (sumX * sumX));
    float b = ((sumY) - (m * sumX)) / n;
    if(text == "mb"){
        cout << round(m * 1e3) / 1e3 << endl;
        cout << round(b * 1e3) / 1e3;
    }
    if(text == "func"){
        cout << "y = ";
        if(round(m * 1e3) / 1e3 == 0){
            cout << round(b * 1e3) / 1e3;
        }
        else{
            if(abs(round(m * 1e3) / 1e3) == 1){
                if(round(m * 1e3) / 1e3 == 1){
                    cout << "x ";
                }
                else{
                    cout << "-x ";
                }
            }
            else{
                cout << round(m * 1e3) / 1e3 << "x ";
            }

            if(round(b * 1e3) / 1e3 != 0){
                if(round(b * 1e3) / 1e3 < 0){
                    cout << "- ";
                }
                else{
                    cout << "+ ";
                }
                cout << abs(round(b * 1e3) / 1e3);
            }
        }
    }
}
