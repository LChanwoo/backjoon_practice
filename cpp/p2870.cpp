#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<string> v;

string removeZero(string temp){
    while(temp[0]=='0'){
        temp.erase(temp.begin());
    }
    if(temp=="")
        temp = "0";
    return temp;
}

int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n;i++){
        cin >> s;
        string temp="";
        for(char c:s){
            if(c>='0' && c<='9'){
                temp += c;
            }else{
                if(temp!=""){
                    temp = removeZero(temp);
                    v.push_back(temp);
                    temp = "";
                }
            }
        }
        if(temp!=""){
            temp = removeZero(temp);
            v.push_back(temp);
            temp = "";
        }
    }
    sort(v.begin(), v.end(), [](string a, string b){
        if(a.length()==b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    for(string i : v){
        cout << i << '\n';
    }
}