#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    vector<string> strV={"c=","c-","dz=","d-","lj","nj","s=","z="};

    string str;
    cin >> str;
    for(int i=0;i<8;i++){
        while(str.find(strV[i])!=string::npos)
            str.replace(str.find(strV[i]),strV[i].length(),"!");
    }
    cout <<str.length();
    return 0;

}