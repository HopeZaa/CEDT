#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<tuple<int, int, int, int>> v(n);
    for(auto &[a, b, c, d] : v){
        cin >> a >> b >> c >> d;
    }
    for(int i=0;i<v.size();++i){
        for(int j=i+1;j<v.size();++j){
            auto [x1_1, y1_1, x2_1, y2_1] = v[i];
            auto [x1_2, y1_2, x2_2, y2_2] = v[j];
            if(x2_1 >= x1_2 and y2_1 >= y1_2 and x2_1 <= x2_2 and y2_1 <= y2_2){
                printf("%d %d %d %d %d %d %d %d \n",x1_1, y1_1, x2_1, y2_1, x1_2, y1_2, x2_2, y2_2);
                int x1 = max(x1_1, x2_1);
                int y1 = max(y1_1, y2_1);
                int x2 = min(x1_2, x2_2);
                int y2 = min(y1_2, y2_2);
                // printf("%d %d %d %d\n",x1 ,y1, x2, y2);
                // cout << (abs(x2 - x1) * abs(y2 - y1)) << endl;
            }
        }
    }
}