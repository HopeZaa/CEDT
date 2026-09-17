#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
  cin.tie(nullptr)->sync_with_stdio(false); cout.tie(0);
  int n, cnt = 1, pv = 0, maxN = INT_MIN;
  vector<int> v;
  vector<tuple<int, int, int>> ans;
  while(cin >> n){
    v.emplace_back(n);
  }
  v.emplace_back(INT_MIN);
  for(int i=1;i<v.size();++i){
    if(v[i] == v[pv]){
      ++cnt;
    }
    else{
      if(cnt >= maxN){
        if(cnt > maxN){
          ans.clear();
        }
        ans.emplace_back(v[pv], pv, i);
        maxN = cnt;
      }
      cnt = 1;
      pv = i;
    }
  }
  sort(ans.begin(), ans.end());
  for(auto [a, b, c] : ans){
    cout << a << " --> x[ " << b << " : " << c << " ]" << endl;
  }
}
