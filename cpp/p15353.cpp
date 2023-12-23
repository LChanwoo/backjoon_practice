#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string a, b;
string addBigInt(string a, string b){
    string c;
    int sum = 0;
    while(!a.empty()||!b.empty()||sum){
        if(!a.empty()){
            sum += a.back() - '0';
            a.pop_back();
        }
        if(!b.empty()){
            sum += b.back() - '0';
            b.pop_back();
        }
        c.push_back((sum%10)+'0');
        sum /= 10;
    }
    reverse(c.begin(), c.end());
    return c;
}

int main(){
    cin >> a >> b;
    cout << addBigInt(a, b) << '\n';
    return 0;
}