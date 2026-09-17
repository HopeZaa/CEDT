#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    int n, m;
    cin >> n >> m;
    int cntA = 0, cntB = 0, sumA = 0, sumB = 0;
    for(int i=0;i<n;++i){
        string a;
        cin >> a;
        if(a == "A"){
            sumA += 11;
            ++cntA;
        }
        else if(isalpha(a[0])){
            sumA += 10;
        }
        else{
            sumA += stoi(a);
        }
    }
    for(int i=0;i<m;++i){
        string a;
        cin >> a;
        if(a == "A"){
            sumB += 11;
            ++cntB;
        }
        else if(isalpha(a[0])){
            sumB += 10;
        }
        else{
            sumB += stoi(a);
        }
    }
    for(int i=0;i<cntA;++i){
        if(sumA <= 21){
            break;
        }
        sumA -= 10;
    }
    for(int i=0;i<cntB;++i){
        if(sumB <= 21){
            break;
        }
        sumB -= 10;
    }
    if(sumA > 21 and sumB > 21){
        cout << "Draw" << endl;
    }
    else if(sumB > 21){
        cout << "A" << endl;
    }
    else if(sumA > 21){
        cout << "B" << endl;
    }
    else{
        if(sumA == sumB){
            cout << "Draw" << endl;
        }
        else if(sumA > sumB){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    cout << sumA << ' ' << sumB;
}