#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m;
    cin >> n;
    int grid[11][11];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> grid[i][j];
        }
    }
    cin >> m;
    int rowA = 0, rowB = 0, colA = 0, colB = 0;
    int A = 0, B = 0, cnt = 0;
    for(int i=0;i<n * n;++i){
        rowA = i / n, colA = ((i / n) % 2 == 0 ? i % n : n - (i % n) - 1);
        int valueA = grid[rowA][colA], valueB = grid[rowB][colB];
        if(i % 2 == 0){
            A -= valueA;
        }
        else{
            A += valueA;
        }
        if(!(rowA == rowB and colA == colB)){
            if(valueB % 2 == 0){
                B += valueB;
            }
            else{
                B -= valueB;
            }
        }
        else{
            ++cnt;
        }
        rowB = ((rowB + valueB) % n + n) % n, colB = (valueB % 2 == 0 ? ((colB + valueB + 1) % n + n) % n : ((colB - valueB - 1) % n + n) % n);
    }
    if(m == 1){
        if(A > B){
            cout << "A " << A << ' ' << B;
        }
        else if(B > A){
            cout << "B " << A << ' ' << B;
        }
        else{
            cout << "EQUAL " << A << ' ' << B;
        }
    }
    if(m == 2){
        cout << cnt;
    }
}