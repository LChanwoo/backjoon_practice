#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string s;

void print(string s, bool acceptable){
    cout << "<" << s << "> is ";
    if(!acceptable){
        cout << "not ";
    }
    cout << "acceptable.\n";
}

bool check(string password){
    int mo = 0;
    int isVowel = 0;
    int isConsonant = 0;
    char last = ' ';
    for (char x : password){
        if(x==last&&x!='e'&&x!='o') return false;
        last = x;
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
            isConsonant = 0;
            ++mo;
            isVowel++;
            if(isVowel>=3) return false;
        }else{
            isVowel = 0;
            isConsonant++;
            if(isConsonant>=3) return false;
        }
    }
    return mo >= 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        cin >> s;
        if(s=="end") break;
        if(check(s)) print(s, true);
        else print(s, false);
    }
    return 0;
}