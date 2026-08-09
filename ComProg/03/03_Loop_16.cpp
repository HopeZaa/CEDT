#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n * 2 - 1;++j){
            if(i == n - 1){
                cout << "*";
            }
            else{
                if(j == n - 1 - i or j == n - 1 + i){
                    cout << "*";
                }
                else{
                    if(j < n - 1 - i or j > n - 1 - i and j < n - 1 + i){
                        cout << ".";
                    }
                }
            }
        }
        cout << endl;
    }
}