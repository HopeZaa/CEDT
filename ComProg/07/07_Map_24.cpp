#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int cmp(pair<int, string> a, pair<int, string> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, q, maxN = INT_MIN;
    double sum = 0;
    cin >> n;
    map<string, double> mp, data;
    for(int i=0;i<n;++i){
        string text;
        double num;
        cin >> text >> num;
        mp[text] = num;
    }
    cin >> q;
    for(int i=0;i<q;++i){
        string text;
        double num;
        cin >> text >> num;
        if(mp.find(text) != mp.end()){
            sum += mp[text] * num;
            if(data.find(text) == data.end()){
                data[text] = num * mp[text];
            }
            else{
                data[text] += num * mp[text];
            }
        }
    }
    if(sum == 0){
        cout << "No ice cream sales";
        return 0;
    }
    cout << "Total ice cream sales: " << sum << endl;
    vector<pair<int, string>> v;
    for(auto [a, b] : data){
        v.emplace_back(b, a);
        if(b > maxN){
            maxN = b;
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout << "Top sales: ";
    for(auto [a, b] : v){
        if(a != maxN){
            break;
        }
        cout << b << ' ';
    }
}