#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, minX, minY, maxX, maxY;
    cin >> n;
    vector<pair<int, int>> q1, q2, q3, q4;
    bool isQ1 = false, isQ2 = false, isQ3 = false, isQ4 = false;
    for(int i=0;i<n;++i){
        int x, y;
        cin >> x >> y;
        if(x == 0 or y == 0){
            continue;
        }
        if(x > 0 and y > 0){
            q1.emplace_back(x, y);
            isQ1 = true;
        }
        if(x < 0 and y > 0){
            q2.emplace_back(x, y);
            isQ2 = true;
        }
        if(x < 0 and y < 0){
            q3.emplace_back(x, y);
            isQ3 = true;
        }
        if(x > 0 and y < 0){
            q4.emplace_back(x, y);
            isQ4 = true;
        }
    }
    if(!isQ1 and !isQ2 and !isQ3 and !isQ4){
        cout << "No point in any quadrant";
        return 0;
    }
    if(isQ1){
        minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;
        for(auto [x, y] : q1){
            minX = min(minX, x);
            minY = min(minY, y);
            maxX = max(maxX, x);
            maxY = max(maxY, y);
        }
        cout << "Q1: (" << minX << ", " << minY << ") (" << maxX << ", " << maxY << ") " << (maxX - minX) * (maxY - minY) << endl;
    }
    if(isQ2){
        minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;
        for(auto [x, y] : q2){
            minX = min(minX, x);
            minY = min(minY, y);
            maxX = max(maxX, x);
            maxY = max(maxY, y);
        }
        cout << "Q2: (" << minX << ", " << minY << ") (" << maxX << ", " << maxY << ") " << (maxX - minX) * (maxY - minY) << endl;
    }
    if(isQ3){
        minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;
        for(auto [x, y] : q3){
            minX = min(minX, x);
            minY = min(minY, y);
            maxX = max(maxX, x);
            maxY = max(maxY, y);
        }
        cout << "Q3: (" << minX << ", " << minY << ") (" << maxX << ", " << maxY << ") " << (maxX - minX) * (maxY - minY) << endl;
    }
    if(isQ4){
        minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;
        for(auto [x, y] : q4){
            minX = min(minX, x);
            minY = min(minY, y);
            maxX = max(maxX, x);
            maxY = max(maxY, y);
        }
        cout << "Q4: (" << minX << ", " << minY << ") (" << maxX << ", " << maxY << ") " << (maxX - minX) * (maxY - minY) << endl;
    }
}