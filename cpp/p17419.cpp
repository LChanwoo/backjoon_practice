#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int N;
string s;
int main() {
    cin >> N >> s;
    int cnt = 0;
    for (int i = 0; i < N;i++){
        if(s[i]=='1') cnt++;
    }
    cout << cnt;
    return 0;
}
