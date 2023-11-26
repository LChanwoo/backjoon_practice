#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string pattern;
    cin >> pattern;
    int pos = pattern.find('*');
    string prefix = pattern.substr(0, pos);
    string suffix = pattern.substr(pos + 1);
    string s;
    for (int i = 0; i < n;i++){
        cin >> s;
        if (prefix.size() + suffix.size() > s.size()){
            cout << "NE" << '\n';
            continue;
        }else{
            if (s.substr(0, prefix.size()) == prefix && s.substr(s.size() - suffix.size()) == suffix){
                cout << "DA" << '\n';
            }else{
                cout << "NE" << '\n';
            }
        }
    }
    return 0;

}