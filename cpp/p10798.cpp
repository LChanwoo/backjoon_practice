#include <iostream>
#include <string>

using namespace std;

int main(){
    string s[5];
    for(int i=0; i<5;i++){
        cin >> s[i];
    }
    for(int i=0;i<15;i++){
        if(i<s[0].length()) cout << s[0][i];
        if(i<s[1].length()) cout << s[1][i];
        if(i<s[2].length()) cout << s[2][i];
        if(i<s[3].length()) cout << s[3][i];
        if(i<s[4].length()) cout << s[4][i];
    }
    return 0;
}