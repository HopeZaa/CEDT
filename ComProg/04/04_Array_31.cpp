#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    string text, temp = "";
    int dig[] = {12, 9, 6, 3};
    string suf[] = {"trillion", "billion", "million", "thousand", ""};
    string pre[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string ten[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int k=0;
    cin >> text;
    vector<string> v;
    for(int i=text.length()-1;i>=0;--i){
        ++k;
        temp += text[i];
        if(k % 3 == 0 or i == 0){
            reverse(temp.begin(), temp.end());
            v.emplace_back(temp);
            temp = "";
        }
    }
    reverse(v.begin(), v.end());
    k = 0;
    while(!v.empty()){
        if(dig[k] < v.size() * 3){
            bool isPrint = false;
            if(!v.empty()){
                temp = v.front();
            }
            if(temp.length() == 3){
                if(temp[0] != '0'){
                    isPrint = true;
                    cout << pre[temp[0] - '0'] << " hundred ";
                }
                temp.erase(temp.begin());
            }
            if(temp.length() == 2){
                if(temp[0] != '0'){
                    if(temp[0] == '1'){
                        int num = stoi(temp);
                        isPrint = true;
                        cout << ten[num % 10] << " ";
                        temp.erase(temp.begin());                        
                    }
                    else{
                        isPrint = true;
                        cout << tens[temp[0] - '0'] << " ";
                    }
                }
                temp.erase(temp.begin());
            }
            if(temp.length() == 1){
                if(temp[0] != '0'){
                    isPrint = true;
                    cout << pre[temp[0] - '0'] << " ";
                }
                temp.erase(temp.begin());
            }
            if(isPrint){
                cout << suf[k] << " ";
            }
            v.erase(v.begin());
        }
        // cout << k << " : ";
        ++k;
    }
}