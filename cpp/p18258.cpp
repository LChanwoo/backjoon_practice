#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    cin >> N;
    string s;
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        cin>>s;
        if(s=="push"){
            cin >> tmp;
            q.push(tmp);
        }else if(s=="pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
                q.pop();
            }
        }else if(s=="size"){
            cout << q.size() << '\n';
        }else if(s=="empty"){
            int ans = q.empty()? 1:0;
            cout << ans << '\n';
        }else if(s=="front"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
            }
        }else if(s=="back"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back() << '\n';
            }
        }
    }
    return 0;

}