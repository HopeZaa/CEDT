#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cmp(tuple<string, int, double, double> a, tuple<string, int, double, double> b){
    return get<2>(a) > get<2>(b);
}
int cmp2(tuple<string, int, double, double> a, tuple<string, int, double, double> b){
    if(get<1>(a) == get<1>(b)){
        return get<3>(a) > get<3>(b);
    }
    return get<1>(a) > get<1>(b);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<tuple<string, int, double, double>> ans;
    vector<pair<string, double>> v;
    double sum = 0;
    while(1){
        string text;
        double n;
        cin >> text;
        if(text == "END"){
            break;
        }
        cin >> n;
        sum += n;
        v.emplace_back(text, n);
    }
    int realSum = 0;
    for(auto [text, n] : v){
        int num = floor(n / (sum / 100.0));
        realSum += num;
        double r = (n / (sum / 100.0)) - num;
        ans.emplace_back(text, num, r, n);
    }
    sort(ans.begin(), ans.end(), cmp);
    for(int i=0;i<ans.size();++i){
        if(realSum == 100){
            break;
        }
        ++realSum;
        ++get<1>(ans[i]);
    }
    sort(ans.begin(), ans.end(), cmp2);
    for(auto [a, b, c, d] : ans){
        if(b == 0){
            continue;
        }
        cout << fixed << setprecision(0) << a << ' ' << b << ' ' << d << endl;
    }
}
