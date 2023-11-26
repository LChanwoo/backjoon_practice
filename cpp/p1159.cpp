#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int a[26]={0};
    for(int i=0; i<n; i++){
        cin >> s;
        a[s[0]-'a']++;
    }
    bool flag = false;
    for(int i=0; i<26; i++){
        if(a[i]>=5){
            cout << (char)(i+'a');
            flag = true;
        }
    }
    if(!flag){
        cout << "PREDAJA";
    }
    return 0;
}