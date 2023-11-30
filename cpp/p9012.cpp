#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int n;
string s;

int main(){
    cin >> n;
    while(n--){
        cin >> s;
        int cnt = 0;
        stack<char> st;
        for(char c : s){
            if(c=='('){
                st.push(c);
            }else{
                if(st.empty()){
                    cnt = -1;
                    break;
                }else{
                    st.pop();
                }
            }
        }
        if(cnt<0||!st.empty()){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
    }
}