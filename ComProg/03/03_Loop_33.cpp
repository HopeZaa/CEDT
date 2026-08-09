#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<int> a, b;
    int minN = INT_MAX, maxN = INT_MIN;
    while(true){
        int x, y;
        cin >> x;
        if(x != -998 and x != -999){
            cin >> y;
            a.emplace_back(x);
            b.emplace_back(y);
        }
        else{
            if(x == -998){
                for(int i=0;i<a.size();++i){
                    if(i % 2 == 0){
                        minN = min(minN, a[i]);
                        maxN = max(maxN, b[i]);
                    }
                    else{
                        minN = min(minN, b[i]);
                        maxN = max(maxN, a[i]);
                    }
                }
            }
            else{
                for(int i=0;i<a.size();++i){
                    if(i % 2 == 0){
                        minN = min(minN, b[i]);
                        maxN = max(maxN, a[i]);
                    }
                    else{
                        minN = min(minN, a[i]);
                        maxN = max(maxN, b[i]);
                    }
                }
            }
            break;
        }
    }
    cout << minN << ' ' << maxN;
}