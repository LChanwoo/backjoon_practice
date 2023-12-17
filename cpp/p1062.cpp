#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int n, k;
int words[51];
int learned = 0;
string s;

int go (int index, int k, int cnt){
    if(k<0) return 0;
    if(index==26){
        int cnt = 0;
        for (int i = 0; i < n;i++){
            if((words[i] & learned) == words[i]) cnt++;
        }
        return cnt;
    }
    int ans = go(index + 1, k - 1, cnt + 1);

    return ans;
}

int main(){
    cin >>  n >> k;
    for (int i = 0; i < n;i++){
        cin >> s;
        for (char x : s){
            words[i] |= (1 << (x - 'a'));
        }
    }

    cout << go(0, k, 0);

    return 0;
}
