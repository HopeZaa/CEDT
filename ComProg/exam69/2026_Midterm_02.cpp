#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int card_order(string a){
    if(a == "A") return 14;
    else if(a == "K") return 13;
    else if(a == "Q") return 12;
    else if(a == "J") return 11;
    return stoi(a);
}
int card_value(string a){
    if(a == "A") return 1;
    else if(a == "J" or a == "Q" or a == "K") return 10;
    return stoi(a);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string card[3];
    cin >> card[0] >> card[1] >> card[2];
    if(card[0] == card[1] and card[1] == card[2]){
        cout << "Three of kind: " << card[0] << '-' << card[1] << '-' << card[2];
    }
    else{
        int sum = (card_value(card[0]) + card_value(card[1]) + card_value(card[2])) % 10;
        cout << sum << ": ";
        vector<pair<int, string>> v;
        for(int i=0;i<3;++i){
            v.emplace_back(card_order(card[i]), card[i]);
        }
        sort(v.rbegin(), v.rend());
        for(int i=0;i<3;++i){
            auto [_, e] = v[i];
            cout << e << (i !=2 ? "-" : "");
        }
    }
}
/*
K K K
A J 3
*/