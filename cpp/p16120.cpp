#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> stk;

    for(int i=0; i<s.length();i++){
        if(s[i]=='P'){
            stk.push(s[i]);
        }else if(s[i]=='A'){
            if(stk.size()>=2 && stk.top()=='P'){
                stk.pop();
                stk.pop();
                stk.push('P');
            }else{
                cout << "NP" << endl;
                return 0;
            }
        }
    }
    return 0;
}
