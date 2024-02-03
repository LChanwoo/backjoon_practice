#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    int c[26]={0};
    fill(c, c + 26, 0);
    cin >> str;
    for (int i = 0; i < str.length();i++){
        if(str[i]>='a'){
            c[str[i] - 'a']++;
        }else{
            c[str[i] - 'A']++;
        }
    }
    int max = 0;
    int maxIndex = 0;
    for (int i = 0; i < 26;i++){
        if(c[i]>max){
            max = c[i];
            maxIndex = i;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 26;i++){
        if(c[i]==max){
            cnt++;
        }
    }
    if(cnt>1){
        cout << '?';
    }else{
        cout << (char)(maxIndex + 'A');
    }
    return 0;

}