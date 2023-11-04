#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> ans;
    stack<char> st_op;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            ans.push_back(s[i]);
        }else{
            if(s[i]=='('){
                st_op.push(s[i]);
            }else if(s[i]=='*' || s[i]=='/'){
                while(!st_op.empty() && (st_op.top()=='*' || st_op.top()=='/')){
                    ans.push_back(st_op.top());
                    st_op.pop();
                }
                st_op.push(s[i]);
            }else if(s[i]=='+' || s[i]=='-'){
                while(!st_op.empty() && st_op.top()!='('){
                    ans.push_back(st_op.top());
                    st_op.pop();
                }
                st_op.push(s[i]);
            }else if(s[i]==')'){
                while(!st_op.empty() && st_op.top()!='('){
                    ans.push_back(st_op.top());
                    st_op.pop();
                }
                st_op.pop();
            }

        }
    }
    while(!st_op.empty()){
        ans.push_back(st_op.top());
        st_op.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    return 0;
}