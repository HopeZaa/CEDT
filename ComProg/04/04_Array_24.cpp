#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    priority_queue<int> pq;
    for(auto &e : v){
        cin >> e;
        pq.emplace(e);
    }
    for(auto e : v){
        cout << e << ' ';
    }
    cout << endl;
    for(int i=n - 1;i>=0;--i){
        if(v[i] != pq.top()){
            int pos;
            for(int j=0;j<n;++j){
                if(pq.top() == v[j]){
                    pos = j;
                }
            }
            if(pos != 0){
                reverse(v.begin(), v.begin() + pos + 1);
                for(auto e : v){
                    cout << e << ' ';
                }
                cout << endl;
            }
            reverse(v.begin(), v.begin() + i + 1);
            for(auto e : v){
                cout << e << ' ';
            }
            cout << endl;
        }
        pq.pop();
    }
}