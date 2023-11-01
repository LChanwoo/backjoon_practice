#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, n;
    cin >> N;
    string s;
    queue<int> q;
    for(int i=0;i<N;i++){
        cin >> s;
        if(s=="push"){
            cin >> n;
            q.push(n);
        }else if(s=="pop"){
            if(q.empty()){
                cout << -1 << endl;
            }else{
                cout << q.front() << endl;
                q.pop();
            }
        }else if(s=="size"){
            cout << q.size() << endl;
        }else if(s=="empty"){
            cout << q.empty() << endl;
        }else if(s=="front"){
            if(q.empty()){
                cout << -1 << endl;
            }else{
                cout << q.front() << endl;
            }
        }else if(s=="back"){
            if(q.empty()){
                cout << -1 << endl;
            }else{
                cout << q.back() << endl;
            }
        }
    }
    return 0;
}