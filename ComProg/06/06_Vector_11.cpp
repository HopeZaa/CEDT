#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, a;
    cin >> n;
    deque<int> dq;
    vector<int> v(n);
    for(auto &e : v){
        cin >> e;
    }
    while(1){
        cin >> a;
        if(a == -1){
            break;
        }
        v.emplace_back(a);
    }
    bool isFront = true;
    for(auto e : v){
        if(isFront){
            dq.push_back(e);
        }
        else{
            dq.push_front(e);
        }
        isFront = !isFront;
    }
    cout << "[";
    while(!dq.empty()){
        if(dq.size() == 1){
            cout << dq.front() << "]";
        }
        else{
            cout << dq.front() << ", ";
        }
        dq.pop_front();
    }
}