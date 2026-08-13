#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, row, cnt = 0;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    vector<int> v;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> grid[i][j];
            if(grid[i][j] != 0){
                v.emplace_back(grid[i][j]);   
            }
            else{
                row = i;
            }
        }
    }
    for(int i=0;i<v.size();++i){
        for(int j=i+1;j<v.size();++j){
            if(v[i] > v[j]){
                ++cnt;
            }
        }
    }
    if((n % 2 == 1 and cnt % 2 == 0) or (n % 2 == 0 and cnt % 2 == 1 and row % 2 == 0) or (n % 2 == 0 and cnt % 2 == 0 and row % 2 == 1)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}