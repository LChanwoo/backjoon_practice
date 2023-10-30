#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> stk;

    for(int i=0; i<s.length();i++){
        stk.push(s[i]);
        if(stk.top()=='A' && s[i]=='P'){
            stk.pop();
            stk.pop();
        }else if(stk.top()!='A' &&s[i]=='P'){
            stk.push(s[i]);
        }else{
            cout <<"NP";
            return 0;
        }


    }
    return 0;
}
