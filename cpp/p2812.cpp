#include<iostream>
#include<stack>
#include<string>
using namespace std;

int n, k;
string s;
stack<char> st;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < n;i++){
        while(k>0&&!st.empty()&&st.top()<s[i]){
            st.pop();
            k--;
        }
        st.push(s[i]);
    }
    while(k>0){
        st.pop();
        k--;
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    for (int i = ans.size() - 1; i >= 0;i--){
        cout << ans[i];
    }
    return 0;
}