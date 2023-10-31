#include<iostream>
#include<string>
#include<cmath>
#include<stack>

using namespace std;

stack<int> st;
int main(){
    int N;
    string s;
    cin >> N;
    int n;
    for(int i=0;i<N;i++){
        cin >> s;
        if(s=="push"){
            cin >> n;
            st.push(n);
        }else if(s=="pop"){
            if(st.empty()){
                cout << -1 << endl;
            }else{
                cout << st.top() << endl;
                st.pop();
            }
        }else if(s=="size"){
            cout << st.size() << endl;
        }else if(s=="empty"){
            cout << st.empty() << endl;
        }else if(s=="top"){
            if(st.empty()){
                cout << -1 << endl;
            }else{
                cout << st.top() << endl;
            }
        }
    }
    return 0;
}