#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string s;

int main() {
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size();i++){
        if(s.find("pi",i)==i) i += 1;
        else if(s.find("ka",i)==i) i += 1;
        else if(s.find("chu",i)==i) i += 2;
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}