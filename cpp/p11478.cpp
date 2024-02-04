#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int main(){
    string str;
    cin >> str;
    set<string> s;
    for (int i = 0; i < str.length();i++){
        for (int j = 1; j <= str.length()-i;j++){
            s.insert(str.substr(i, j));
        }
    }
    cout << s.size();
    return 0;
}


