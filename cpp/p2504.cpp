#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<string> v;
    vector<char> cv;
    cv.push_back(str[0]);
    for(int i=1;i<str.length();i++){
        if(str[i]=='('||str[i]=='['){
            cv.push_back(str[i]);
        }
        else if(str[i]==')'||str[i]==']'){
            if(str[i] == ')' && cv.back()=='('){
                cv.pop_back();
            }else if(str[i] == ']' && cv.back()=='['){
                cv.pop_back();
            }else{
                cv.push_back(str[i]);
            }
        }
    }
    if(cv.size()!=0){
        cout << 0;
        return 0;
    }
    v.push_back(string(1,str[0]));
    for(int i=1;i<str.length();i++){
        if(str[i]==']'){
            int tmp = v.size()-1;
            while(tmp>0){
                if(v[tmp]!=")" && v[tmp]!="]" &&v[tmp]!="(" &&v[tmp]!="[" ){
                    tmp--;
                }else{
                    break;
                }
            }
            if(v[tmp]=="["){
                if( tmp!= v.size()-1 ){          
                    v[tmp] = to_string(stoll(v[tmp+1])  *3);
                    v.pop_back();               
                }
                else{
                    v[tmp]='3';
                }
            }
        }        
        else if(str[i]==')'){
            int tmp = v.size()-1;
            while(tmp>0){
                if(v[tmp]!=")" && v[tmp]!="]" &&v[tmp]!="(" &&v[tmp]!="[" ){
                    tmp--;
                }else{
                    break;
                }
            }
            if(v[tmp] == "("){
                if(tmp!= v.size()-1 ){                
                    v[tmp] = to_string(stoll(v[tmp+1])  *2);
                    v.pop_back();
                }else{
                    v[tmp] = '2';
                }
            }
        }
        else{
            v.push_back(string(1,str[i]));
        }

        for(int x=0; x<v.size()-1; x++){
            if(v[x]!=")" && v[x]!="]" &&v[x]!="(" &&v[x]!="[" ){
                if(v[x+1]!=")" && v[x+1]!="]" &&v[x+1]!="(" &&v[x+1]!="[" ){
                    v[x]=to_string( stoll(v[x])+stoll(v[x+1]));
                    v.erase(v.begin()+x+1);
                }   
            }
        }
    }
    if(v.size()>1){
        cout << 0;
    } 
    else{
        if(v[0]!=")" && v[0]!="]" &&v[0]!="(" &&v[0]!="["){
            cout << stoll(v[0]);
        }else{
            cout << 0;
        }
    } 
    return 0;


}
