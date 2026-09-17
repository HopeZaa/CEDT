#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(0);
    double n, a, tic, sum = 0, cnt = 0;
    cin >> n;
    queue<tuple<string, double, double>> q, order;
    while(n--){
        string text;
        cin >> text;
        if(text == "reset"){
            cin >> a;
            tic = a;
        }
        if(text == "new"){
            cin >> a;
            cout << ">> ticket " << tic << endl;
            q.emplace(text, tic, a);
            ++tic;
        }
        if(text == "next"){
            cout << ">> call " << get<1>(q.front()) << endl;
            order.emplace(text, get<1>(q.front()), get<2>(q.front()));
            q.pop();
        }
        if(text == "order"){
            cin >> a;
            while(order.size() > 1){
                order.pop();
            }
            cout << ">> qtime " << get<1>(order.front()) << ' ' << a - get<2>(order.front()) << endl;
            sum += a - get<2>(order.front());
            ++cnt;
            order.pop();
        }
        if(text == "avg_qtime"){
            cout << ">> avg_qtime " << sum / cnt << endl;
        }
    }
}
