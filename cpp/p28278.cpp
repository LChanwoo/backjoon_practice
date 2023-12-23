#include<iostream>
#include<stack>
#include<algorithm>
#include<deque>
using namespace std;

int n, query, tmp;
stack<int> st;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> query;
        if(query==1){
            cin>>tmp;
            st.push(tmp);
        }else if(query==2){
            if(!st.empty()) cout << st.top() << '\n',st.pop();
            else cout << -1 << '\n';
        }else if(query==3){
            cout << st.size() << '\n';
        }else if(query==4){
            if(st.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }else if(query==5){
            if(st.empty()) cout << -1 << '\n';
            else cout << st.top() << '\n';
        }
    }
    return 0;
}