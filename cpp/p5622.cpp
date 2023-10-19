#include <iostream>

using namespace std;

int dial(char c){
    if(c>='A' && c<='C'){
        return 3;
    }else if(c>='D' && c<='F'){
        return 4;
    }else if(c>='G' && c<='I'){
        return 5;
    }else if(c>='J' && c<='L'){
        return 6;
    }else if(c>='M' && c<='O'){
        return 7;
    }else if(c>='P' && c<='S'){
        return 8;
    }else if(c>='T' && c<='V'){
        return 9;
    }else if(c>='W' && c<='Z'){
        return 10;
    }

}

int main(){
    string s;
    cin >> s;
    int sum =0;
    for(int i=0;i<s.length();i++){
        sum +=dial(s[i]);
    }
    cout << sum;
    return 0;
}
