#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int cnt[26], flag;
int main(){
    string s,result;
    char mid;
    cin >> s;
    for(char i: s){
        cnt[i-'A']++;
    }
    for(int i=25; i>=0; i--){
        if(cnt[i] && cnt[i]%2==1){
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
    if(flag==2){
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    if(mid){
        result.insert(result.size() / 2, 1, mid);
    } 
    cout << result;
    return 0;
}