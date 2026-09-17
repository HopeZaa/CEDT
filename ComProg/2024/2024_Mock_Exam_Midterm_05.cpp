#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, cnt = 0;
    cin >> n;
    string text = "", per = "";
    for(int i=0;i<n;++i){
        char a;
        cin >> a;
        text += a;
    }
    vector<string> permu;
    for(int i=1;i<=n;++i){
        per += char(i + '0');
        permu.emplace_back(per);
    }
    for(auto e : permu){
        do{
            for(int i=0;i<=n-e.size();++i){
                string sub = text.substr(i, e.size());
                if(sub == e){
                    ++cnt;
                }
            }
        }while(next_permutation(e.begin(), e.end()));
    }
    cout << cnt;
}