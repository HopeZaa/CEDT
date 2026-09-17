#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
bool vi[5][5];
bool chk(){
    for(int i=0;i<5;++i){
        bool isTrue = true;
        for(int j=0;j<5;++j){
            if(!vi[i][j]){
                isTrue = false;
            }
        }
        if(isTrue){
            return true;
        }
    }
    for(int j=0;j<5;++j){
        bool isTrue = true;
        for(int i=0;i<5;++i){
            if(!vi[i][j]){
                isTrue = false;
            }
        }
        if(isTrue){
            return true;
        }
    }
    bool isTrue = true;
    for(int i=0;i<5;++i){
        if(!vi[i][i]){
            isTrue = false;
        }
    }
    if(isTrue){
        return true;
    }
    isTrue = true;
    for(int i=0;i<5;++i){
        if(!vi[i][4 - i]){
            isTrue = false;
        }
    }
    if(isTrue){
        return true;
    }
    return false;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    map<char, int> mp = {{'B', 0}, {'I', 1}, {'N', 2}, {'G', 3}, {'O', 4}};
    char data[] = {'B', 'I', 'N', 'G', 'O'};
    string grid[5][5];
    for(int i=0;i<5;++i){
        char a;
        cin >> a;
    }
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cin >> grid[i][j];
        }
    }
    string text;
    int cnt = 1;
    vi[2][2] = true;
    while(cin >> text){
        char t = text[0];
        text.erase(text.begin());
        for(int i=0;i<5;++i){
            if(grid[i][mp[t]] == text){
                vi[i][mp[t]] = true;
                break;
            }
        }
        if(chk()){
            cout << cnt << endl;
            for(int i=0;i<5;++i){
                bool isTrue = true;
                for(int j=0;j<5;++j){
                    if(!vi[i][j]){
                        isTrue = false;
                    }
                }
                if(isTrue){
                    for(int j=0;j<5;++j){
                        if(grid[i][j] == "*"){
                            continue;
                        }
                        cout << data[j] << grid[i][j] << (j != 4 ? ", " : "");
                    }
                    cout << endl;
                }
            }
            for(int j=0;j<5;++j){
                bool isTrue = true;
                for(int i=0;i<5;++i){
                    if(!vi[i][j]){
                        isTrue = false;
                    }
                }
                if(isTrue){
                    for(int i=0;i<5;++i){
                        if(grid[i][j] == "*"){
                            continue;
                        }
                        cout << data[j] << grid[i][j] << (i != 4 ? ", " : "");
                    }
                    cout << endl;
                }
            }
            bool isTrue = true;
            for(int i=0;i<5;++i){
                if(!vi[i][i]){
                    isTrue = false;
                }
            }
            if(isTrue){
                for(int i=0;i<5;++i){
                    if(grid[i][i] == "*"){
                        continue;
                    }
                    cout << data[i] << grid[i][i] << (i != 4 ? ", " : "");
                }
            }
            isTrue = true;
            for(int i=0;i<5;++i){
                if(!vi[i][4 - i]){
                    isTrue = false;
                }
            }
            if(isTrue){
                for(int i=4;i>=0;--i){
                    if(grid[i][4 - i] == "*"){
                        continue;
                    }
                    cout << data[4 - i] << grid[i][4 - i] << (i != 0 ? ", " : "");
                }
            }
            return 0;
        }
        ++cnt;
    }
}
