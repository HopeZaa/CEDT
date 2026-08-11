#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    map<string, string> mp = {
            {"Robert", "Dick"}, 
            {"William", "Bill"}, 
            {"James", "Jim"}, 
            {"John", "Jack"}, 
            {"Margaret", "Peggy"}, 
            {"Edward", "Ed"}, 
            {"Sarah", "Sally"}, 
            {"Andrew", "Andy"}, 
            {"Anthony", "Tony"}, 
            {"Deborah", "Debbie"},

            {"Dick", "Robert"},
            {"Bill", "William"},
            {"Jim", "James"},
            {"Jack", "John"},
            {"Peggy", "Margaret"},
            {"Ed", "Edward"},
            {"Sally", "Sarah"},
            {"Andy", "Andrew"},
            {"Tony", "Anthony"},
            {"Debbie", "Deborah"}};
    int q;
    cin >> q;
    while(q--){
        string text;
        cin >> text;
        if(mp.find(text) == mp.end()){
            cout << "Not found" << endl;
        }
        else{
            cout << mp[text] << endl;
        }
    }
}