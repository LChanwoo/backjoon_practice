#include<iostream>
#include<string>
#include<stack>
#include<utility>
using namespace std;

int dp[200001] = {0};
string s;
stack<int> st;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 0,max = 0;
    
    cin >> n >> s;

    for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(i);
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
            if(cnt>max) max = cnt;
            
            cnt = 0;
        }
    }
    cout << (max > cnt ? max :cnt) ;
    return 0;
}