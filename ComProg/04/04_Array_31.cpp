#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, temp = "";
    cin >> text;
    string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string luksib[] = {"", "-", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string sib[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> v;
    for(int i=text.length() - 1;i>=0;--i){
        temp += text[i];
        if(temp.length() == 3 or i == 0){
            reverse(temp.begin(), temp.end());
            v.emplace_back(temp);
            temp = "";
        }
    }
    reverse(v.begin(), v.end());
    if(text.length() > 12){
        int n = stoi(v.front());
        if(n != 0){
            if(v.front().length() == 3 and !v.front().empty()){
                    
                cout << num[v.front()[0] - '0'] << " hundred ";
                v.front().erase(v.front().begin());
            }
            if(v.front().length() == 2 and !v.front().empty()){
                if(stoi(v.front()) != 0){
                    if(stoi(v.front()) < 10){
                        cout << num[stoi(v.front())] << ' ';
                        v.erase(v.begin());
                    }
                    else{
                        if(stoi(v.front()) >= 20){
                            cout << luksib[stoi(v.front()) / 10] << ' ';
                            v.front().erase(v.front().begin());
                            if(stoi(v.front()) != 0){
                                cout << num[stoi(v.front())] << ' ';
                                v.erase(v.begin());
                            }
                            else{
                                v.erase(v.begin());
                            }
                        }
                        else{
                            cout << sib[stoi(v.front()) % 10] << ' ';
                        }
                    }
                }
                else{
                    v.erase(v.begin());
                }
            }
            if(v.front().length() == 1){
                cout << num[stoi(v.front())] << ' ';
            }
            cout << "trillion ";
        }
    }
    for(auto e : v){
        cout << e << ' ';
    }
}
/*
23999999999999
*/