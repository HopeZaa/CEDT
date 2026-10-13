#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int q(tuple<string, double, int, int> a, tuple<string, double, int, int> b){
    if(get<1>(a) == get<1>(b)){
        if(get<3>(a) == get<3>(b)){
            return get<0>(a) < get<0>(b);
        }
        return get<3>(a) < get<3>(b);
    }
    return get<1>(a) > get<1>(b);
}
int w(tuple<string, double, int, int> a, tuple<string, double, int, int> b){
    if(get<1>(a) == get<1>(b)){
        if(get<2>(a) == get<2>(b)){
            return get<0>(a) < get<0>(b);
        }
        return get<2>(a) > get<2>(b);
    }
    return get<1>(a) > get<1>(b);
}
int u(tuple<string, double, int, int> a, tuple<string, double, int, int> b){
    return get<0>(a) < get<0>(b);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    vector<tuple<string, double, int, int>> v;
    while(1){
        string a;
        double b;
        int c, d;
        cin >> a;
        if(a == "END"){
            break;
        }
        cin >> b >> c >> d;
        v.emplace_back(a, b, c, d);
    }
    sort(v.begin(), v.end(), q);
    vector<string> data[3];
    for(auto [id, gpa, hr, income] : v){
        if(gpa >= 3.75 and income <= 300000){
            data[0].emplace_back(id);
        }
    }
    sort(v.begin(), v.end(), w);
    for(auto [id, gpa, hr, income] : v){
        if(!(gpa >= 3.75 and income <= 300000) and  gpa >= 3.50 and hr >= 100){
            data[1].emplace_back(id);
        }
    }
    sort(v.begin(), v.end(), u);
    for(auto [id, gpa, hr, income] : v){
        if(!(gpa >= 3.75 and income <= 300000) and !(!(gpa >= 3.75 and income <= 300000) and  gpa >= 3.50 and hr >= 100)){
            data[2].emplace_back(id);
        }
    }
    if(!data[0].empty()){
        cout << "Qualified" << endl;
        for(auto e : data[0]){
            cout << e << endl;
        }
    }
    if(!data[1].empty()){
        cout << "Waiting List" << endl;
        for(auto e : data[1]){
            cout << e << endl;
        }
    }
    if(!data[2].empty()){
        cout << "Unqualified" << endl;
        for(auto e : data[2]){
            cout << e << endl;
        }
    }
}