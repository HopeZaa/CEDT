#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m, sumA = 0, sumB = 0;
    cin >> n >> m;
    vector<string> a(n), b(m);
    for(auto &e : a){
        cin >> e;
    }
    for(auto &e : b){
        cin >> e;
    }
    for(auto e : a){
        if(e[0] >= '0' and e[0] <= '9'){
            if(e[0] == '1'){
                sumA += 10;
            }
            else{
                sumA += stoi(e);
            }
        }
        else{
            if(e == "A"){
                sumA += 11;
            }
            else{
                sumA += 10;
            }
        }
    }
    for(auto e : b){
        if(e[0] >= '0' and e[0] <= '9'){
            if(e[0] == '1'){
                sumB += 10;
            }
            else{
                sumB += stoi(e);
            }
        }
        else{
            if(e == "A"){
                sumB += 11;
            }
            else{
                sumB += 10;
            }
        }
    }
    for(auto e : a){
        if(e == "A" and sumA > 21){
            sumA -= 10;
        }
    }
    for(auto e : b){
        if(e == "A" and sumB > 21){
            sumB -= 10;
        }
    }
    if(sumA > 21 and sumB > 21){
        cout << "Draw" << endl;
    }
    else if(sumA > 21){
        cout << "B" << endl;
    }
    else if(sumB > 21){
        cout << "A" << endl;
    }
    else if(sumA > sumB){
        cout << "A" << endl;
    }
    else if(sumB > sumA){
        cout << "B" << endl;
    }
    else{
        cout << "Draw" << endl;
    }
    cout << sumA << ' ' << sumB;
}