#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    if(s==r){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}