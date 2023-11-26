#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(char &c : s){
        if(c>='a'&&c<='z'){
            if(c+13>'z'){
                c = c + 13 - 'z' + 'a' - 1;

            }
            else{
                c = c + 13;
            }
        }
        else if(c>='A'&&c<='Z'){
            if(c+13>'Z'){
                c = c + 13 - 'Z' + 'A' - 1;
            }
            else{
                c = c + 13;
            }
        }
    }
    cout << s;
    return 0;
}