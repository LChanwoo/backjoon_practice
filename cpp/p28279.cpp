#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;

int n,query,x;

deque<int> dq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> query;
        if(query == 1){
            cin >> x;
            dq.push_front(x);
        }else if(query == 2){
            cin >> x;
            dq.push_back(x);
        }else if(query == 3){
            if(dq.empty())
                cout << -1 << '\n';
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }else if(query == 4){
            if(dq.empty())
                cout << -1 << '\n';
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }else if(query == 5){
            cout<<dq.size()<<'\n';
        }else if(query == 6){
            if(dq.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }else if(query == 7){
            if(dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        }else if(query == 8){
            if(dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
    }
    return 0;
}