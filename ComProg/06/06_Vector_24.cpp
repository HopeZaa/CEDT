#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cmp(pair<double, string> a, pair<double, string> b){
  if(a.first == b.first){
    return a.second < b.second;
  }
  return a.first > b.first;
}
int main(){
  cin.tie(nullptr)->sync_with_stdio(false); cout.tie(0);
  map<string, double> mp;
  while(1){
    string a;
    double b;
    cin >> a;
    if(a == "END"){
      break;
    }
    cin >> b;
    mp[a] = b;
  }
  string text;
  map<string, pair<int, double>> ans;
  while(cin >> text){
    if(mp.find(text) != mp.end()){
      if(ans.find(text) != ans.end()){
        ans[text].first++;
      }
      else{
        ans[text] = {1, mp[text]};
      }
    }
  }
  vector<pair<double, string>> anss;
  for(auto [a, b] : ans){
    anss.emplace_back(b.first * b.second, a);
  }
  sort(anss.begin(), anss.end(), cmp);
  if(!anss.size()){
    cout << "No Sales";
    return 0;
  }
  int cnt = 0;
  for(auto [b, a] : anss){
    if(cnt == 3){
      break;
    }
    cout << a << ' ' << b << endl;
    ++cnt;
  }
}
