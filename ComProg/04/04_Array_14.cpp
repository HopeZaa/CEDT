#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double n, m, grid[31][31];
    cin >> n >> m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin >> grid[i][j];
            grid[i][j] = grid[i][j] + grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];
        }
    }
    for(int i=3;i<=n;++i){
        for(int j=3;j<=m;++j){
            cout << round(((grid[i][j] - grid[i - 3][j] - grid[i][j - 3] + grid[i - 3][j - 3]) / 9.0) * 100.0) / 100.0 << ' ';
        }
        cout << endl;
    }
}