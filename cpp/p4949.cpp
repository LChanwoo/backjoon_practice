#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

string s;
int main()
{
    getline(cin, s);
    while (s != ".")
    {
        stack<int> st;
        bool flag = true;
        for (char c : s)
        {
            if(c=='('||c=='['){
                st.push(c);
            }else if(c==')'){
                if(st.empty()||st.top()!='('){
                    flag = false;
                    break;
                }else{
                    st.pop();
                }
            }else if(c==']'){
                if(st.empty()||st.top()!='['){
                    flag = false;
                    break;
                }else{
                    st.pop();
                }
            }
        }
        if (flag && st.empty())
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
        getline(cin, s);
    }
    return 0;
}