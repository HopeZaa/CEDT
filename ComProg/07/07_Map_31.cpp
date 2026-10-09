#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
  cin.tie(nullptr)->sync_with_stdio(false); cout.tie(0);
  int n, m;
  cin >> n;
  map<string, int> data;
  for(int i=0;i<n;++i){
    string text;
    int a;
    cin >> text >> a;
    data[text] = a;
  }
  cin >> m;
  vector<tuple<double, string, vector<string>>> v;
  vector<string> id;
  for(int i=0;i<m;++i){
    string text;
    double num;
    cin >> text >> num;
    vector<string> temp;
    for(int j=0;j<4;++j){
      string tmp;
      cin >> tmp;
      temp.emplace_back(tmp);
    }
    v.emplace_back(num, text, temp);
    id.emplace_back(text);
  }
  sort(v.rbegin(), v.rend());
  map<string, string> ans;
  for(int i=0;i<v.size();++i){
    for(int j=0;j<4;++j){
      if(data[get<2>(v[i])[j]] == 0){
        continue;
      }
      else{
        data[get<2>(v[i])[j]] = data[get<2>(v[i])[j]] - 1;
        ans[get<1>(v[i])] = get<2>(v[i])[j];
        break;
      }
    }
  }
  sort(id.begin(), id.end());
  for(auto e : id){
    cout << e << ' ' << ans[e] << endl;
  }
}