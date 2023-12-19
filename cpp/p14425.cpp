#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int N, M;
string s;
map<string, int> m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N;i++){
        cin >> s;
        m[s]++;
    }
    int cnt = 0;
    for (int i = 0; i < M;i++){
        cin >> s;
        if(m[s]) cnt++;
    }
    cout << cnt;
    return 0;
}