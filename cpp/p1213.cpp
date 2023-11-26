#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int cnt[26], flag=0;
int main(){
    string s,result="";
    //mid도 초기화해줘야함 안해서 3번 틀림
    char mid=0;
    cin >> s;
    for(char i: s){
        cnt[i-'A']++;
    }
    for(int i=25; i>=0; i--){
        if(cnt[i] & 1){
            mid=char(i+'A');
            flag++;
            cnt[i]--;
        }
        if(flag==2)
            break;
        for (int j = 0; j < cnt[i];j+=2){
            result = char(i + 'A') + result + char(i + 'A');
        }
    }
    if(mid){
        result.insert(result.size() / 2, 1, mid);
    } 
    if(flag==2){
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    cout << result;
    return 0;
}