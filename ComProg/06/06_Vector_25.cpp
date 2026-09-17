#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
  cin.tie(nullptr)->sync_with_stdio(false); cout.tie(0);
  vector<pair<string, string>> v;
  while(1){
    string a, b;
    cin >> a;
    if(a == "q"){
      break;
    }
    cin >> b;
    v.emplace_back(a, b);
  }
  string text;
  while(cin >> text){
    for(int i=0;i<v.size();++i){
      if(text == v[i].first){
        if(v[i].second == "B+"){
          v[i].second = "A";
        }
        else if(v[i].second == "B"){
          v[i].second = "B+";
        }
        else if(v[i].second == "C+"){
          v[i].second = "B";
        }
        else if(v[i].second == "C"){
          v[i].second = "C+";
        }
        else if(v[i].second == "D+"){
          v[i].second = "C";
        }
        else if(v[i].second == "D"){
          v[i].second = "D+";
        }
        else if(v[i].second == "F"){
          v[i].second = "D";
        }
      }
    }
  }
  for(auto [a, b] : v){
    cout << a << ' ' << b << endl;
  }
}
