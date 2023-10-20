#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    string str;
    cin >> str;
    vector<string> strV={"c=","c-","dz=","d-","lj","nj","s=","z="};
    vector<char> cv={"c","d","l",""};
    for(int i=0;i<str.length();){
        string tmp ;
        while(true){
            if(find(strV.begin(),strV.end(),tmp)!=strV.end())tmp.push_back(str[i]);
            i++
            if(find(strV.begin(),strV.end(),tmp)!=strV.end()){
//                cout<< tmp << " ";
                break;
            }
            cout<< i << " ";
        }
    }
    return 0;

}