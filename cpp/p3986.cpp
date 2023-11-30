#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int t, ret;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<char> st;
        for(char c :s){
            if(st.size() && st.top() == c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        if(st.empty()){
            ret++;
        }
    }
    cout << ret;
}