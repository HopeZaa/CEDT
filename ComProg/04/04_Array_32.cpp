#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, q;
    cin >> n;
    pair<int, int> p[n + 1];
    for(int i=0;i<n;++i){
        int a, b, c;
        cin >> a >> b >> c;
        p[a] = {b, c};
    }
    cin >> q;
    while(q--){
        int here, tar, lift = -1, minN = INT_MAX;
        cin >> here >> tar;
        for(int i=1;i<=n;++i){
            auto [st, en] = p[i];
            int sum = 0;
            if((st <= en and here >= st and here <= en) or (st >= en and here <= st and here >= en)){
                if(st <= en and here >= st and here <= en){
                    if(tar >= here and tar <= en){
                        sum = 0;
                    }
                    else{
                        sum = abs(en - tar);
                    }
                }
                else{
                    if(tar <= here and tar >= en){
                        sum = 0;
                    }
                    else{
                        sum = abs(en - tar);
                    }
                }
            }
            else{
                if(st <= en){
                    if(here <= st or here >= en){
                        sum = abs(here - en) + abs(here - tar);
                    }
                }
                else{
                    if(here >= st or here <= en){
                        sum = abs(here - en) + abs(here - tar);
                    }
                }
            }
            // cout << i << ' ' << sum << endl;
            if(sum < minN){
                minN = sum;
                lift = i;
            }
        }
        cout << ">> " << lift << endl;
    }
}