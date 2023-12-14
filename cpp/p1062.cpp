#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int n, k;
// 어떤 단어가 배울 수 있는지를 나타내는 비트마스크
int words[51];
// 배운 알파벳의 수
int learned = 0;
long long ans = (1 << 26) - 1;

int main(){
    cin >>  n >> k;
    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        for (char x : s){
            words[i] |= (1 << (x - 'a'));
        }
    }
    for(int s : words){
        cout << s << '\n';
    }
    if(k<5){
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n;i++){
        ans&= words[i];
    }
    for(int i=0;i<26;i++){
        if((ans&(1<<i))){
            learned++;
        }
    }
    cout << learned;

    return 0;
}
