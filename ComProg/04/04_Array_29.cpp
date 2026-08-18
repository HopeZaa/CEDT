#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, maxN = INT_MIN;
    cin >> n;
    vector<tuple<int, int, int, int>> v(n);
    vector<pair<int, int>> ans;
    for(auto &[a, b, c, d] : v){
        cin >> a >> b >> c >> d;
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            auto [x1_1, y1_1, x2_1, y2_1] = v[i];
            auto [x1_2, y1_2, x2_2, y2_2] = v[j];
            // printf("%d %d %d %d %d %d %d %d\n",x1_1 ,y1_1, x2_1, y2_1, x1_2, y1_2, x2_2, y2_2);
            int x1 = max(x1_1, x1_2);
            int y1 = max(y1_1, y1_2);
            int x2 = min(x2_1, x2_2);
            int y2 = min(y2_1, y2_2);
            // printf("%d %d %d %d \n",x1, y1, x2, y2);
            if(x2 > x1 and y2 > y1){
                if(abs(x2 - x1) * abs(y2 - y1) >= maxN){
                    if(abs(x2 - x1) * abs(y2 - y1) == maxN){
                        ans.emplace_back(i, j);
                    }
                    else{
                        ans.clear();
                        ans.emplace_back(i, j);
                    }
                    maxN = abs(x2 - x1) * abs(y2 - y1);
                }
            }
        }
    }
    if(ans.empty()){
        cout << "No overlaps";
        return 0;
    }
    cout << "Max overlapping area = " << maxN << endl;
    for(auto [a, b] : ans){
        cout << "rectangles " << a << " and " << b << endl;
    }
}