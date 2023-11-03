#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    int sum = 0;
    stack<char> st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }else{
            st.pop();
            if(s[i-1]=='('){
                sum += st.size();
            }else{
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}