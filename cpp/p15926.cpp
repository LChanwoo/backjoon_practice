#include<iostream>
#include<string>
#include<stack>
#include<utility>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dp[200001] = {0};
    stack<int> st;
    int cnt = 0;
    int max = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(i);
        }
        else if(!st.empty() && s[i]==')'){
            dp[st.top()] = 1;
            dp[i] = 1;
            st.pop();
        }
    }
    for(int i=0;i<n;i++){
        if(dp[i]==1){
            cnt++;
        }else{
            if(cnt>max){
                max = cnt;
            }
            cnt = 0;
        }
    }
    cout << (max > cnt ? max :cnt) ;
    return 0;
}